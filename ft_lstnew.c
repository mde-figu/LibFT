/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:47:08 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/17 16:40:06 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list      *ft_lstnew(void *content)
{
    t_list  *lst;

    lst = malloc(sizeof(t_list));
    if (lst == NULL)
        return (0);
    lst->content = content;
    lst
}