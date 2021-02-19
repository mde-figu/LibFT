/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:44:18 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 16:16:36 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countdigit(int n)
{
	if ((n / 10) == 0)
		return (1);
	else
		return (ft_countdigit(n / 10) + 1);
}

char			*ft_itoa (int n)
{
	unsigned int	num;
	char			*c;
	size_t			len;

	len = ft_countdigit(n);
	if (n < 0)
	{
		num = -(unsigned int)n;
		len = len + 1;
	}
	else
		num = (unsigned int)n;
	if ((c = malloc((len + 1) * sizeof(*c))))
		return (0);
	c[len] = '\0';
	while (len--)
	{
		c[len] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		c[0] = '-';
	return (c);
}
