/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:42:03 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 15:16:16 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t  i;
	size_t  j;

	nstr = ((char *)malloc(len + 1));
	if (s == NULL || nstr == NULL)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		nstr[j] = s[i];
		j = j + 1;
		i = i + 1;
	}
	nstr[j] = '\0';
	return(nstr);

}
