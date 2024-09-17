/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:50:51 by andloren          #+#    #+#             */
/*   Updated: 2024/09/17 15:37:41 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last_occurrence;
	unsigned char	uc;

	last_occurrence = NULL;
	uc = (unsigned char)c;
	while (*s)
	{
		if (*s == uc)
			last_occurrence = (char *)s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (last_occurrence);
}

/* int	main(void)
{
	char	*s;
	int		c;

	s = "Carabola";
	c = 'a';
	printf("%s\n", ft_strrchr(s, c));
	return (0);
} */
