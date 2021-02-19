/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:16:05 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 15:28:47 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*strdup(const char *s)
{
char *ret;

ret = ((char *)malloc(ft_strlen(s) + 1));
if (ret == NULL || ft_strlen(s) == '\0')
	return (0);
else
{
	ret = malloc(0);
	ft_memcpy(ret, s, ft_strlen(s) + 1);
	return (ret);
}

}
