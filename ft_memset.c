/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:46:39 by andloren          #+#    #+#             */
/*   Updated: 2024/09/14 19:44:55 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char	*b;
	int		c;
	size_t	len;

	b = malloc(10);
	if (b == NULL)
	{
		perror("malloc failed");
		return (1);
	}
	c = 'a';
	len = 5;
	printf("%s\n", (char *)ft_memset(b, c, len));
	free(b);
	return (0);
} */
