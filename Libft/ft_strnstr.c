/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:01:26 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/16 12:01:52 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*str;
	char	*str_find;
	size_t	j;

	str = (char *) haystack;
	str_find = (char *) needle;
	i = 0;
	j = 0;
	if (!str_find[j])
		return (str);
	while (len > i && str[i])
	{
		if (len - i < ft_strlen(needle))
			return (0);
		while (str[i + j] == str_find[j])
		{
			j++;
			if (j == ft_strlen(str_find))
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
