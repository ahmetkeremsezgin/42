/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:51:51 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/21 16:05:06 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	n;
	char	*str;

	str = (char *) b;
	n = 0;
	while (len > n)
	{
		str[n] = (char) c;
		n++;
	}
	return (b);
}
