/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:29:14 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/16 12:30:11 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;

	len = ft_strlen(s1);
	if (!s1)
		return (0);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (!str)
		return (0);
	ft_memcpy(str, s1, ft_strlen(s1));
	str[len] = '\0';
	return (str);
}
