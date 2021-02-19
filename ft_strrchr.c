/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:28:34 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 15:22:00 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*len;

	len = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *len && c != *s)
		s = s - 1;
	if (c == *s)
		return ((char *)s);
	return (0);
}
