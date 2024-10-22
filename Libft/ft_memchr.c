/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:35:24 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/21 16:04:21 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	d;

	d = (unsigned char) c;
	str = (unsigned char *) s;
	i = 0;
	while (n > i)
	{
		if (str[i] == d)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
