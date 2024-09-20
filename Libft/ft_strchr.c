/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:17:22 by andloren          #+#    #+#             */
/*   Updated: 2024/09/19 11:46:05 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == uc)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (uc == '\0')
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
/* int	main(void)
{
	char	*s;
	char	c;

	s = "Carabola";
	c = 0;
	printf("%i\n", *ft_strchr(s, c));
	return (0);
} */
