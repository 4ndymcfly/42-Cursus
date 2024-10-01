/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:06:48 by andloren          #+#    #+#             */
/*   Updated: 2024/10/01 12:36:51 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	num;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		num = -n;
	}
	else
		num = n;
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = '0' + (num % 10);
	ft_putchar_fd(c, fd);
}

/* int	main(void)
{
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-123, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	return (0);
} */
