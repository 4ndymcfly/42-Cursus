/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:37:07 by andloren          #+#    #+#             */
/*   Updated: 2024/09/13 19:38:19 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* int	main(void)
{
	char	*s;
	size_t	n;

	s = "Carabola";
	n = 5;
	ft_bzero(s, n);
	printf("%s\n", s);
	return (0);
} */
