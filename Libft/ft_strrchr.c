/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:02:41 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/19 13:45:07 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		str_len;

	str = (char *)s;
	str_len = ft_strlen(s);
	while (str_len > 0)
	{
		if (str[str_len] == (unsigned char)c)
			return (&str[str_len]);
		str_len--;
	}
	if (str[str_len] == (unsigned char)c)
		return (&str[str_len]);
	return (0);
}
