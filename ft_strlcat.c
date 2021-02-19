/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:50:34 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 20:04:43 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		*ft_strlcat(char *dst, const char *src, size_t dstlen)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = ft_strlen(dst);
	while (*(src + i1) != '\0' && (i2 + i1 + 1) < size)
	{
		*(dst + i2 + i1) = *(src + i1);
		i1++;
	}
	if ((i2 + i1) < size)
		*(dst + i2 + i1) = '\0';
	while (*(src + i1) != '\0')
		i1++;
	if (size < i2)
	{
		return (size + i1);
	}
	return (i2 + i1);
}
