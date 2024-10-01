/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:04:13 by andloren          #+#    #+#             */
/*   Updated: 2024/10/01 12:06:38 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (*(s + i))
	{
		f(i, s + i);
		i++;
	}
}

/* void	ft_iteri_toupper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	printf("Position: %u, Modified character: %c\n", i, *c);
}

int	main(void)
{
	char	str[] = "Hello, 42!";

	printf("Original string: %s\n\n", str);
	ft_striteri(str, ft_iteri_toupper);
	printf("\nModified string: %s\n\n\n", str);
	return (0);
} */
