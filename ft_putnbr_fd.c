/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:23:28 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/17 17:06:14 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int g_count;

void		ft_putchar_fd(char c, int fd)
{
	write(&fd, &c, 1);
}

void		ft_putnbr(int n, int fd)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (n < 0 && g_count == 0)
		{
			g_count = 0;
			ft_putchar_fd('-', fd);
			nb = (nb * (-1));
			ft_putnbr_fd(n);
			g_count = g_count + 1;
		}
		else if (n > 9)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else
		{
			ft_putchar(n + '0', fd);
		}
	}
}
