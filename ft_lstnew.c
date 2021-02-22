/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:36:22 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/22 13:25:17 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *new;

	it (!(new = (t_list *)malloc(sizeof(t_list))))
	{
		return (0);
	}
	else
	{
		new->content = content;
		new->next = NULL;
		return (new);
	}
}
