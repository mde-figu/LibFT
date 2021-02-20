/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirkios <mirkios@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:12:42 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/20 14:19:02 by mirkios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_fd(char *str, int fd)
{
	int counter;

	counter = 0;
	if(!s)
		return;
	while (str[counter] != '\0')
	{
		write(fd, &str[counter], 1);
		counter++;
	}
}
