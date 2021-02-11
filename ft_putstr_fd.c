/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:12:42 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/08 20:22:33 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str, int fd)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(&fd, &str[counter], 1);
		counter++;
	}
}