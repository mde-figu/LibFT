/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:23:25 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 18:51:59 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	iswhtspc(int c, int enteronce)
{
	if (((c >= 7 && c <= 13) || c == 32) && enteronce)
		return (1);
	else
		return (0);
}

static	int	nbrposit(const char *str, int sign)
{
	int ret;

	ret = 0;
	while (ft_isdigit(*str))
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (sign * ret);
}

int			ft_atoi(const char *str)
{
	int sign;
	int enteronce;

	sign = 1;
	enteronce = 1;
	while (*str != '\0')
	{
		if (*str == '-' && enteronce)
		{
			sign = -1;
			enteronce = 0;
		}
		else if (*str == '+' && enteronce)
			enteronce = 0;
		else if (ft_isdigit(*str))
			return (nbrposit(str, sign));
		else if (!iswhtspc(*str, enteronce))
			return (0);
		str++;
	}
	return (0);
}
