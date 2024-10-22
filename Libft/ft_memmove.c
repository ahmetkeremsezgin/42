/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:26:17 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/15 14:05:37 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	s = (char *) src;
	d = (char *) dst;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		d = ft_memcpy(dst, src, len);
	return ((void *) d);
}
