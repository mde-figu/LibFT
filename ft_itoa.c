/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:44:18 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/18 17:25:55 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  size_t      ft_countdigit(int n)
{
    if ((n / 10) == NULL)
        return (1);
    else
        return (ft_countdigit(n / 10) + 1)
}
char        *ft_itoa (int n)
{
    unsigned int    num;
    char    *c;
    size_t  len;

    len = ft_countdigit(n);
    if(n < 0)
    {
        num = -(unsigned int)n;
        len = len + 1;
    }
    else
        num = (unsigned int)n;
    if ((s = malloc((len + 1) * sizeof(*s))))
        return(0);
    s[len] = '\0';
    while(len--)
    {
        s[len] = num % 10 + '0';
        num = num / 10;
    }
    if (n < 0)
        s[0] = '-';
    return (s);
}
