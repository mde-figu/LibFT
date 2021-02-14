/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirkios <mirkios@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:17:55 by mirkios           #+#    #+#             */
/*   Updated: 2021/02/13 22:56:04 by mirkios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char        *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    i = 0;
    j = 0;
    if (little[j] != '\0') 
    {
        while (big[i] != '\0')
        {
            while (big[i + j] == little[j] && (i + j) <= len)
            {
                if (big[i + j] == '\0' && little[j] == '\0')
                    return ((char *)&big[i])
                j = j + 1;
            }
        i = i + 1;
        }
    }
    return ((char *)big + h)
}