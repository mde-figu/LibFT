/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:04:20 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/18 17:28:17 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memset(void *s, int c, size_t len)
{
    unsigned char* p=s;

    while (len--)
    {
        *p++ = (unsigned char)c;
    }
    return s;
}
