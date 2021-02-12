/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:41:19 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/12 10:59:55 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void        *memmove(void *dest, const void *src, size_t len)
{
    int i;
    unsigned char   *ptsrc;
    unsigned char   *ptdest;
    i = 0;
    ptsrc == (unsigned char*)src;
    ptdest == (unsigned char*)dest;
    if (dest == NULL && src == NULL)
        return (0);
    if (ptsrc == ptdest)
        return (0);
    if (ptsrc < ptdest)
    {
        while(++i <= len)
        {
            ptdest[len - 1] = ptsrc[len - 1];
        }
    }
    else
    {
        while (len-- > 0)
            *(ptdest = ptdest + 1) = *(ptsrc = ptsrc + 1);
    }   
    return (dest);
}