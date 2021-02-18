/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:56:16 by mde-figu          #+#    #+#             */
/*   Updated: 2021/02/18 17:00:15 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
typedef struc   s_list
{
    void    *content;
    struc  s_list   *next;
    t_list;
}

int		ft_atoi(const char *nptr);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
char		*ft_itoa (int n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t len);
void		*ft_memchr(const void *s, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t len);
void		*ft_memcpy(void *dest, const void *src, int len);
void		*memmove(void *dest, const void *src, size_t len);
void		*ft_memset(void *s, int c, size_t len);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putstr(char *str, int fd);
char		**ft_split(char const *s, char c);
char		*ft_strchr(const char *s, int c);
char		*strdup(const char *s);
char	*ft_strjoin(char const s1, char const s2);
char		*strcat(char *dst, const char *src, size_t dstlen);
size_t		*ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strlen(char *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char        *ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strtrim(char const *s1, char const *set);
char        *ft_substr(char const *s, unsigned int start, size_t len);
char        ft_tolower(int c);
char		ft_toupper(int c);

#endif