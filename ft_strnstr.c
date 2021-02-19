/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:17:55 by mirkios           #+#    #+#             */
/*   Updated: 2021/02/19 20:01:35 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (*(little + i) == '\0')
		return ((char *)big);
	while (*(big + i) != '\0' && i <= len)
	{
		if (*(big + i) == *(little + j))
		{
			j = j + 1;
			if (*(little + j) == '\0')
			{
				return ((char *)(big + i - j + 1));
			}
		}
		i = i + 1;
		if (*(little + j) != *(big + i))
		{
			j = 0;
		}
	}
	return (NULL);
}
