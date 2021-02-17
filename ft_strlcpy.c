/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:44:30 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/17 17:06:56 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t        *strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    size_t i;

    if (dst == NULL || src == NULL)
        return (0);
    srcsize = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        while (src[i] != '\0' && i < dstsize - 1)
        {
            dst[i] = src[i];
            i = i + 1;
        }
        dst[i] = '\0';
    }
    return (dstsize);
}
