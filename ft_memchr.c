/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:02:11 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 16:21:23 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	*fdchar;

	p = (unsigned char*)s;
	fdchar = '\0';
	while ((s != NULL ) && (len--))
	{
		if (*p != (unsigned char)c)
		{
			p = p + 1;
		}
		else
		{
			fdchar = p;
			break ;
		}
	}
	return (fdchar);
}
