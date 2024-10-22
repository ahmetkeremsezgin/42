/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:07:52 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/16 15:27:20 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	str_len;
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	str_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * str_len);
	if (!str)
		return (0);
	while (s1[n])
	{
		str[n] = s1[n];
		n++;
	}
	while (s2[i])
	{
		str[n + i] = s2[i];
		i++;
	}
	str[str_len - 1] = '\0';
	return (str);
}
