/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:31:44 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/05 19:35:42 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char            ft_tolower(char *str)
{
        int count;
        int ret;

        count = 0;
        ret = 1;
        while (str[count] != '\0' && ret == 1)
        {
                if (str[count] >= 65 && str[count] <= 90)
                {
                        str[count] = str[count] + 32;
                        count = count + 1;
                }
                else
                {
                        count = count + 1;
                }
        }
        return (str);
}