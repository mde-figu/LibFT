/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:34:19 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/17 13:01:29 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    i = ft_strlen(s1);
    if (s1 == NULL || set == NULL)
        return (0);
    while(ft_strchr(set, *s1) && *s1)
        s1 =s1 + 1;
    while (ft_strchr(set, s1[i]) && i)
        i = i - 1;
    return (ft_substr(s1, 0, i + 1));
}