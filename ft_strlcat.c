/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:43:54 by andloren          #+#    #+#             */
/*   Updated: 2024/09/13 19:44:10 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	j = i;
	while (src[i - j] != '\0' && i + 1 < size)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}

/* int	main(void)
{
	char	*src;
	char	dst[10];
	size_t	n;

	src = "Carabola";
	n = 5;
	printf("%lu\n", ft_strlcat(dst, src, n));
	return (0);
} */
