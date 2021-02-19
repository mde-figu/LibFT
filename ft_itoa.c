/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:44:18 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 19:50:33 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	rev_array(char *str, int len)
{
	int		i;
	char	c;

	i = 0;
	while (i < len / 2)
	{
		c = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = c;
		i++;
	}
}

static	char	*itos(char *s, unsigned int nbr, int minus)
{
	int	len;

	len = 0;
	while (nbr)
	{
		*s++ = nbr % 10 + '0';
		nbr = (nbr - nbr % 10) / 10;
		len++;
	}
	if (minus)
	{
		*s++ = '-';
		len++;
	}
	*s = '\0';
	rev_array(s - len, len);
	return (s - len);
}

static	int		isminus(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char			*ft_itoa(int n)
{
	int				minus;
	unsigned int	nbr;
	char			*s;

	minus = isminus(n);
	if (minus)
		nbr = n * (-1);
	else
		nbr = n;
	if (!(s = (char *)malloc(12 * sizeof(char))))
		return (NULL);
	if (nbr == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	return (itos(s, nbr, minus));
}
