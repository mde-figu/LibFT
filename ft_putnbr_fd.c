/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:23:28 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 15:31:13 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
long int count;

count = 0;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0 && count == 0)
		{
			count = 0;
			ft_putchar_fd('-', fd);
			n = (n * (-1));
			ft_putnbr_fd(n, fd);
			count = count + 1;
		}
		else if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd((n % 10), fd);
		}
		else
		{
			ft_putchar_fd(n + '0', fd);
		}
	}
}
