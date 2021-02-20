/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirkios <mirkios@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:41:19 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/20 12:13:05 by mirkios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char			temp[n + 1];

	i = 0;
	temp[0] = 0;
	if(dest && src)
	{
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
	}
	return (dest);
}
