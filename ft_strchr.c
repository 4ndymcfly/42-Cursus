/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:03:31 by andloren          #+#    #+#             */
/*   Updated: 2024/09/12 14:29:20 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)(s + i));
	}
	return (NULL);
}

/* int	main(void)
{
	char	*s;
	char	c;

	s = "Carabola";
	c = 'b';
	printf("%s\n", ft_strchr(s, c));
	return (0);
} */
