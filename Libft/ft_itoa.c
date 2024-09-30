/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:49:40 by andloren          #+#    #+#             */
/*   Updated: 2024/09/30 11:33:23 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	nbr;
	char		*res;
	int			len;

	len = numlen(n);
	nbr = (long long)n;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (n < 0)
		nbr = -nbr;
	while (len >= (n < 0))
	{
		res[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

/* int	main(void)
{
	printf("%s\n\n\n", ft_itoa(-2147483648));
	return (0);
} */
