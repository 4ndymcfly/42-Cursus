/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:33:58 by andloren          #+#    #+#             */
/*   Updated: 2024/09/13 13:34:41 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*placeholder;

	placeholder = (unsigned char *)b;
	while (len > 0)
	{
		*placeholder = (unsigned char)c;
		placeholder++;
		len--;
	}
	return (b);
}
int main(void)
{
	// Test the ft_memset function
	char str[50] = "Hello, World!";
	printf("Before memset: %s\n", str);
	ft_memset(str, '*', 5);
	printf("After memset: %s\n", str);

	return 0;
}
