/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:25:12 by andloren          #+#    #+#             */
/*   Updated: 2024/09/27 11:24:09 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static size_t	ft_startpos(char const *s1, char const *set)
{
	int	s_pos;

	s_pos = 0;
	while (s1[s_pos] != 0 && ft_isset(s1[s_pos], set) == 1)
	{
		s_pos++;
	}
	return (s_pos);
}

static size_t	ft_endpos(char const *s1, char const *set)
{
	int	e_pos;

	e_pos = ft_strlen(s1) - 1;
	while (e_pos >= 0 && ft_isset(s1[e_pos], set) == 1)
	{
		e_pos--;
	}
	return (e_pos);
}

static char	*ft_maketrim(const char *s1, char *trim, int s_pos, int e_pos)
{
	int	i;

	i = 0;
	while (s1[s_pos] && (s_pos <= e_pos))
	{
		trim[i] = s1[s_pos];
		i++;
		s_pos++;
	}
	trim[i] = '\0';
	return (trim);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trim;
	int		s_pos;
	int		e_pos;

	if (!s1 || !set)
		return (NULL);
	s_pos = ft_startpos(s1, set);
	e_pos = ft_endpos(s1, set);
	if (s_pos > e_pos)
	{
		trim = malloc(1);
		if (!trim)
			return (NULL);
		trim[0] = '\0';
		return (trim);
	}
	trim = malloc((e_pos - s_pos + 2) * sizeof(char));
	if (!trim)
		return (NULL);
	return (ft_maketrim(s1, trim, s_pos, e_pos));
}

/* int	main(void)
{
	char	s1[] = "   Hello, 42 Students!   ";
	char	set[] = " ";
	char	*trim;
	int		start_pos;
	int		end_pos;

	trim = ft_strtrim(s1, set);
	start_pos = ft_startpos(s1, set);
	end_pos = ft_endpos(s1, set);
	if (trim)
	{
		printf("Start pos:'%d'\n", start_pos);
		printf("End pos:  '%d'\n", end_pos);
		printf("Original: '%s'\n", s1);
		printf("Trimmed:  '%s'\n", trim);
		free(trim);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
} */
