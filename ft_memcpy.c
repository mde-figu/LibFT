/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 19:17:05 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/18 17:28:07 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memcpy(void *dest, const void *src, int len)
{
    size_t     i;
    i = 0;

    if ((dest == NULL) && (src == NULL) && (len > 0))
    return (0);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i]
        i = i + 1;
    }
    return (dest);
}
