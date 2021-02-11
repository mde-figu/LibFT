/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:50:34 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/09 20:12:15 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char        *strcat(char *dst, const char *src, size_t dstlen)
{
    size_t i1;
    size_t i2;

    if (dstlen <= ft_strlen(dst))
        return (dstlen + ft_strlen(src));
    i1 = ft_strlen(dst);
    i2 = 0;
    while (src[i2] != '\0' && i1 + 1 < dstlen)
    {
        dst[i2] = src[i1];
        i1 = i1 + 1;
        i2 = i2 + 1;
    }
    dst[i1] = '\0';
    return (ft_strlen(dst) + ft_strlen(&src[i2]));
}
