/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:02:11 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/12 12:29:40 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void        *ft_memchr(const void *s, int c, size_t len)
{
    unsigned char   *p= (unsigned char*)s;
    unsigned char   *fdchar = NULL;

    while ((s != NULL ) && (len--))
    {
        if (*p != (unsigned char*)c)
        {
            p = p + 1;
        }
        else
        {
            fdchar = p;
            break;
        }
    }
    return (fdchar);
}
