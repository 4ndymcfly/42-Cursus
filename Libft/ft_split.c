/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:11:37 by andloren          #+#    #+#             */
/*   Updated: 2024/09/30 10:24:21 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	next_delimiter(char const *str, char c, int i)
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	next_word(char const *str, char c, int i)
{
	while (str[i] && str[i] == c)
		i++;
	return (i);
}

static int	count_words(const char *str, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			i = next_delimiter(str, c, i);
		}
		else
			i++;
	}
	return (words);
}

static void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		words;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		i = next_word(str, c, i);
		res[j] = ft_substr(str, i, next_delimiter(str, c, i) - i);
		if (!res[j])
			return (free_split(res), NULL);
		j++;
		i = next_delimiter(str, c, i);
	}
	res[j] = NULL;
	return (res);
}

/* int	main(void)
{
	char	*s = "  Hello  World  from      42   ";
	char	c = ' ';
	char	**result;
	int		i;
	int		total_words;

	result = ft_split(s, c);
	if (!result)
	{
		printf("Error: ft_split returned NULL\n");
		return (1);
	}
	i = 0;
	total_words = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i + 1, result[i]);
		i++;
		total_words++;
	}
	printf("Total words: %d\n\n\n", total_words);
	free_split(result);
	return (0);
} */
