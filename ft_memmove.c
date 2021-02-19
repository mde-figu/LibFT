/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:41:19 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 15:59:04 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			temp[n + 1];

	i = 0;
	temp[0] = 0;
	while (i < n)
	{
		temp[i] = *((char *)src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = temp[i];
		i++;
	}
	return (dest);
}
