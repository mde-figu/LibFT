/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:36:40 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 16:37:31 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(char c)
{
	int	ret;

	if ((c >= 65 && c <= 90) ||
		(c >= 97 && c <= 122))
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
