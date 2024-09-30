/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:06:48 by andloren          #+#    #+#             */
/*   Updated: 2024/09/30 12:07:04 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rec_putnbr(int nb, int fd)
{
	char	c;

	if (nb == 0)
		return ;
	c = '0' + nb % 10;
	rec_putnbr(nb / 10, fd);
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		c = '0' - n % 10;
		rec_putnbr(-(n / 10), fd);
	}
	else
	{
		c = '0' + n % 10;
		rec_putnbr(n / 10, fd);
	}
	ft_putchar_fd(c, fd);
}
