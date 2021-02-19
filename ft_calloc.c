/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:25:42 by mirkios           #+#    #+#             */
/*   Updated: 2021/02/19 00:45:59 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    size_t i;

    i = nmemb * size;
    if (nmemb == 0 || size == 0)
        return (0);
    else
    {
        ptr = malloc(i);
        ft_bzero(ptr, i);
        return (ptr);
    }
}
