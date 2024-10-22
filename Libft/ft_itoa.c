/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:42:54 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/21 16:00:33 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static void	fill_str(char *str, long num, int *length)
{
	while (num > 0)
	{
		str[--(*length)] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		length;
	char	*str;

	num = n;
	length = num_length(num);
	str = (char *)malloc(length + 1);
	if (!str)
		return (0);
	str[length] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	else if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	fill_str(str, num, &length);
	return (str);
}
