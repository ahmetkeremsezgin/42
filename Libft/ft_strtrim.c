/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:25:40 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/22 16:53:48 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_first_index(char const *s1, char const *set)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (!s1 || !set)
		return (0);
	if (!*set)
		return (0);
	while (set[i])
	{
		if (set[i] == s1[n])
		{
			n++;
			i = -1;
		}
		i++;
	}
	return (n);
}

static int	ft_last_index(char const *s1, char const *set)
{
	int	n;
	int	i;

	if (!s1 || !set)
		return (-1);
	if (!*s1)
		return (-1);
	n = ft_strlen(s1) - 1;
	i = 0;
	while (set[i])
	{
		if (set[i] == s1[n])
		{
			n--;
			i = -1;
		}
		i++;
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_index;
	int		last_index;
	char	*str;
	int		n;

	n = 0;
	if (s1 == 0 || set == 0)
		return (0);
	start_index = ft_first_index(s1, set);
	last_index = ft_last_index(s1, set);
	if (last_index < start_index)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (last_index - start_index + 2));
	if (!str)
		return (0);
	while (start_index <= last_index)
	{
		str[n] = s1[start_index];
		n++;
		start_index++;
	}
	str[n] = '\0';
	return (str);
}
