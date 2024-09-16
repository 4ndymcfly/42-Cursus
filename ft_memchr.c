/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:53:13 by andloren          #+#    #+#             */
/*   Updated: 2024/09/16 11:51:49 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (void *)(s + i);
		i++;
	}
	return NULL;
}

/* int	main(void)
{
	char	*s;
	int		c;
	size_t	n;

	s = "Carabola";
	c = 'a';
	n = 5;
	printf("%s\n", ft_memchr(s, c, n));
	return (0);
} */
