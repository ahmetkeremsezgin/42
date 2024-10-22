/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:50:19 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/21 16:02:51 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;
	size_t	len_str;

	if (!s)
		return (0);
	len_str = ft_strlen(s);
	if (start >= len_str)
		len = 0;
	else if (len_str < len + start)
		len = len_str - start;
	str = (char *) malloc(len * sizeof(char) + 1);
	if (!str)
		return (0);
	n = 0;
	while (n < len && s[start + n])
	{
		str[n] = s[n + start];
		n++;
	}
	str[n] = '\0';
	return (str);
}
