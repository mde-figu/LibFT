/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:02:11 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/22 14:21:21 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s = s + 1;
	}
	if ((char)c == '\0')
		return ((char *)s);
	else
		return (NULL);
}
