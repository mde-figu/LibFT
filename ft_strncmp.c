/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:36:34 by mirkios           #+#    #+#             */
/*   Updated: 2021/02/18 17:29:33 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    if (n == 0)
        return (0);
    while (i != n)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] == '\0' && s2[i] == '\0')
                return (0)
            if (s1[i] == '\0')
                return ((s2[i]) * (-1))
            if (s2[i] == '\0')
                return (s1[i])
            return (s1[i] - s2[i])
        }
        i = i + 1;
    }
    return (0)
}
