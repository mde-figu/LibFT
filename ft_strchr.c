/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:16:05 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/17 17:06:29 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && c != *s)
        s = s + 1;
    if (c == *s)
        return((char *)s);
    return(0);
}
