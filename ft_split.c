/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:02:52 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/19 19:56:10 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		firstposit(char const *str, char c, int start)
{
	while (str[start] == c)
		start++;
	return (start);
}

static	int		lastposit(char const *str, char c, int start)
{
	while (str[start] != c && str[start] != '\0')
		start++;
	return (start);
}

static	int		nb_of_strs(char const *s, char c)
{
	int nb;
	int checkonce;

	nb = 0;
	checkonce = 1;
	while (*s != '\0')
	{
		if (*s == c)
			checkonce = 1;
		else if (*s != c && checkonce)
		{
			nb++;
			checkonce = 0;
		}
		s++;
	}
	return (nb);
}

static	char	**str_null(char **s)
{
	char	**str;
	int		i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			free(s[i]);
			i++;
		}
		free(s);
		return (NULL);
	}
	else
	{
		if (!(str = (char**)malloc(sizeof(char*))))
			return (NULL);
		str[0] = NULL;
		return (str);
	}
}

char			**ft_split(char const *s, char c)
{
	char	**sstr;
	int		sn;
	int		i;
	int		start;
	int		end;

	end = 0;
	i = 0;
	if (s == NULL)
		return (str_null(NULL));
	sn = nb_of_strs(s, c);
	if (!(sstr = (char**)malloc((sn + 1) * sizeof(char*))))
		return (NULL);
	while (i < sn)
	{
		start = firstposit(s, c, end);
		end = lastposit(s, c, start);
		if (!(sstr[i] = (char*)malloc((end - start + 1) * sizeof(char))))
			str_null(sstr);
		ft_strlcpy(sstr[i++], (s + start), (end++ - start + 1));
	}
	if (!(sstr[i] = (char*)malloc(sizeof(char))))
		return (NULL);
	sstr[i] = NULL;
	return (sstr);
}
