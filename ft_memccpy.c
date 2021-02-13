/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:16:43 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/12 16:05:13 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t len);
void    *ft_memcpy(void *dest, const void *src, int c, size_t len)
{
    void *p = ft_memchr(src, c, len);

    if (p != NULL)
        return (ft_memcpy(dest, src, p - src + 1));
    ft_memcpy (dest, src, len);
    return (NULL);
}
