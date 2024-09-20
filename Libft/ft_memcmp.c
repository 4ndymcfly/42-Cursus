/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:53:48 by andloren          #+#    #+#             */
/*   Updated: 2024/09/13 19:54:14 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
		i++;
	if (i == n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "Carabola";
	s2 = "Caravola";
	n = 5;
	printf("%d\n", ft_memcmp(s1, s2, n));
	return (0);
} */
