/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:47:33 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/12 17:30:36 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_memcmp(const void *s1, const void *s2, size_t len)
{
    unsigned char *i;
    unsigned char *j;
    int stat;
    i = s1;
    j = s2;
    stat = 0;

    if (s1 == s2)
        return (stat);
    
    while (len > 0)
    {
        if (*i != *j)
        {
            stat = (*i > *j)?1:-1;
        }
        len = len - 1;
        i = i + 1;
        j = j + 1;
    }
    return (stat);
}
