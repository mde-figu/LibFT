/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 23:58:57 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 15:10:32 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*jstr;
	int	i;
	int	j;
	int	ls1;
	int	ls2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	j = 0;
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	if (!(jstr = ((char *)malloc(ls1 + ls2 + 1))))
		return (0);
	while (s1[i] != '\0')
	{
		jstr[i] = s1[i];
		i = i + 1;
	}
	while (s2[i] != '\0')
	{
		jstr[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	jstr[i] = '\0';
	return (jstr);
}
