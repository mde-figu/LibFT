/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirkios <mirkios@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:34:19 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/20 18:40:55 by mirkios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	test_start(char const *s1, char const *set)
{
	unsigned int		i;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
	}
	return (i);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		k;
	unsigned int		newlen;
	unsigned int		newstart;

	k = ft_strlen(s1) - 1;
	newstart = test_start(s1, set);
	if (newstart == k + 1)
	{
		if (!(ft_calloc(1, sizeof(char))))
			return (NULL);
		return (ft_calloc(1, sizeof(char)));
	}
	while (k >= newstart && ft_strchr(set, s1[k]))
	{
		k--;
	}
	newlen = (k + 1) - newstart;
	return (ft_substr(s1, newstart, newlen));
}
