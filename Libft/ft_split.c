/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:22:49 by asezgin           #+#    #+#             */
/*   Updated: 2024/10/22 14:46:15 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	free_malloc(char **f, int k)
{
	while (k-- > 0)
		free(f[k]);
}

static int	word_count(const char *s, char c)
{
	int	index;
	int	word_count;

	index = 0;
	word_count = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c && s[index] != '\0')
			index++;
		if (s[index] != c && s[index] != '\0')
			word_count++;
		while (s[index] != c && s[index] != '\0')
			index++;
	}
	return (word_count);
}

static int	word_len_to_char(const char *s, char c)
{
	int	index;

	index = 0;
	while (s[index] && s[index] != c)
		index++;
	return (index);
}

static int	word_save(char **str, char const *s, char c, int i)
{
	int	word_len;
	int	index;

	index = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_len = word_len_to_char(&s[i], c);
			str[index] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (!str[index])
			{
				free_malloc(str, index);
				return (1);
			}
			word_len = 0;
			while (s[i] && s[i] != c)
				str[index][word_len++] = s[i++];
			str[index++][word_len] = '\0';
		}
		else
			i++;
	}
	str[index] = 0;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		empty_control;
	int		i;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!str)
		return (0);
	empty_control = word_save(str, s, c, i);
	if (empty_control != 0)
	{
		free(str);
		return (0);
	}
	return (str);
}
