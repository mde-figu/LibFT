/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirkios <mirkios@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:16:43 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/13 14:34:40 by mirkios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t len);
void    *ft_memccpy(void *dest, const void *src, int c, size_t len)
{
    void *p = ft_memchr(src, c, len);

    if (p != NULL)
        return (ft_memcpy(dest, src, p - src + 1));
    ft_memcpy (dest, src, len);
    return (NULL);
}
