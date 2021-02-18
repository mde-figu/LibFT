/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:50:47 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/18 17:29:29 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *map;

    i = -1;
    map = malloc((ft_strlen(s) + 1) * sizeof(*map));
    if (s == NULL || map == NULL)
        return (NULL);
    while (i < ft_strlen(s))
    {
        i = i + 1;
        map[i] = f(i, s[i]);
    }
    map[i] = '\0';
    return (map);
}
