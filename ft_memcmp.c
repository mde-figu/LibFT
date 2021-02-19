/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:47:33 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 16:19:45 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned const int	*i;
	unsigned const int	*j;
	size_t				count;
	size_t				res;

	i = s1;
	j = s2;
	count = 0;
	res = 0;
	if (s1 == s2)
		return (res);
	while (count < len)
	{
		if (i[count] != j[count])
		{
			res = (i[count] > j[count]) ? 1 : -1;
			return ((i[count] - j[count]) * res);
		}
		count = count + 1;
		i = i + 1;
		j = j + 1;
	}
	return (res);
}
