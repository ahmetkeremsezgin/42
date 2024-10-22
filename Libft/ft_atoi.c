/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:02:06 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/21 15:59:01 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	n;
	int	result;
	int	negative;

	negative = 0;
	result = 0;
	n = 0;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == 32)
		n++;
	if (str[n] == 45)
	{
		n++;
		negative = 1;
	}
	else if (str[n] == 43)
		n++;
	while (str[n] >= '0' && str[n] <= '9')
	{
		result *= 10;
		result += (str[n] - '0');
		n++;
	}
	if (negative)
		result = -result;
	return (result);
}
