/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirkios <mirkios@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 19:17:05 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/13 15:55:58 by mirkios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
