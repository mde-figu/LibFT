/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:25:42 by mirkios           #+#    #+#             */
/*   Updated: 2021/02/14 17:23:45 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void        *ft_calloc(size_t nmemb, size_t size);
{
    void *ptr;
    size_t i;

    i = nmemb * size;
    if (nmemb == NULL || size == NULL)
        return (0);
    else
    {
        ptr = (i);
        ft_bzero(ptr, i);
        return (ptr);
    }
}