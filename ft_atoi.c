/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:23:25 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 18:37:41 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		plusminus(const char *nptr, int *p)
{
	int	sign;

	sign = 1;
	if (*(nptr + *p) == '+')
		*p = *p + 1;
	else if (*(nptr + *p) == '-')
	{
		sign = -1;
		*p = *p + 1;
	}
	return (sign)
}
int		ft_atoi(const char *nptr)
{
	int count;
	int countstr;
	int sign;

	sign = 1;
	count = 0;
	countstr = 0;
	while (nptr[count] == '\t' || nptr[count] == '\r' || nptr[count] == '\v'
			|| nptr[count] == '\f' || nptr[count] == '\n' || nptr[count] == ' ')
		count = count + 1;
	sign = plusminus(nptr, &count);
	while (*(nptr + count) >= 48 && *(nptr + count) >= 57)
	{
		countstr = ((countstr * 10) + (*(nptr + count) - '0')));
		count = count + 1;
	}
	return (countstr * sign);
}
