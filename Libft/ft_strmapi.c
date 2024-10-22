/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:03:56 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/19 13:45:51 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		str_len;
	char	*str;
	int		n;

	n = 0;
	str_len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * str_len + 1);
	if (!str)
		return (0);
	while (s[n])
	{
		str[n] = f(n, s[n]);
		n++;
	}
	str[n] = '\0';
	return (str);
}
