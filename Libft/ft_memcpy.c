/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:12:21 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/21 16:04:51 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*str_dest;
	char	*str_src;

	if (!src && !dst)
		return (dst);
	str_dest = (char *) dst;
	str_src = (char *) src;
	i = 0;
	while (n > i)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (dst);
}
