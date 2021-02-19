/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:02:52 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 17:08:54 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_charcount(const char *str, char c)
{
	int	i;
	int	stop;

	i = 0;
	stop = 0;
	while (str != NULL)
	{
		if (*str != c && stop == 0)
		{
			stop = 1;
			i = i + 1;
		}
		else if (*str == c)
			stop = 0;
		str = str + 1;
	}
	return (i);
}
static char		*ft_dupstr(const char *str, int start, int end)
{
	char	*substr;
	int		i;

	i = 0;
	substr = malloc((end - start) * sizeof(char));
	while (start < end)
		substr[i++] = str[start++];
	substr[i] = '\0';
	return (substr);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		count;
	char	**result;

	i = 0;
	j = 0;
	count = -1;
	result = malloc((ft_charcount(s, c) + 1) * sizeof(char *));
	if (s == NULL || result == NULL)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (count < 0 && s[i] != c)
			count = count + 1;
		else if ((count >= 0 && i == ft_strlen(s)) || s[i] == c)
		{
			result[j++] = ft_dupstr(s, count, i);
			count = -1;
		}
		i = i + 1;
	}
	result[j] = ((char *)'\0');
	return (result);
}
