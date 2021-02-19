/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:50:34 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 20:09:52 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		*ft_strlcat(char *dst, const char *src, size_t dstlen)
{
	unsigned long	i1;
	unsigned long	i2;

	i1 = 0;
	i2 = ft_strlen(dst);
	while (*(src + i1) != '\0' && (i2 + i1 + 1) < dstlen)
	{
		*(dst + i2 + i1) = *(src + i1);
		i1++;
	}
	if ((i2 + i1) < dstlen)
		*(dst + i2 + i1) = '\0';
	while (*(src + i1) != '\0')
		i1++;
	if (dstlen < i2)
	{
		return (dstlen + i1);
	}
	return (i2 + i1);
}
