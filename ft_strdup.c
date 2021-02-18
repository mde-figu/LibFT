/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:16:05 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/18 17:29:05 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *strdup(const char *s)
{

char *ret;
size_t i;

i = nmemb * size;
if (nmemb == NULL || size == NULL)
    return (0);
else
{
    ret = malloc(i);
    ft_memcpy(ret, s, ft_strlen(s));
    return (ret);
}

}
