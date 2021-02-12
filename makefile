# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/11 12:06:18 by mde-figu          #+#    #+#              #
#    Updated: 2021/02/11 13:55:06 by mde-figu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

/*
**
** Your Makefile must at least contain the rules $(NAME), all, clean, fclean and
** re.
** To turn in bonuses to your project, you must include a rule bonus to your
** Makefile, which will add all the various headers, librairies or functions
** that are forbidden on the main part of the project. Bonuses must be in a 
** different file _bonus.{c/h}.
** Mandatory and bonus part evaluation is done separately.
** If your project allows you to use your libft, you must copy its sources and 
** its associated Makefile in a libft folder with its associated Makefile. 
** Your project’s Makefile must compile the library by using its Makefile, 
** then compile the project.
*/

NAME = libft.a
COMP = gcc
FLAGS = -Wall -Werror -Wextra
FILES = ft_isprint.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_atoi.c
 ft_itoa.c ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_bzero.c
 ft_putendl_fd.c ft_strlcpy.c ft_tolower.c
 ft_calloc.c ft_memccpy.c ft_putnbr_fd.c ft_strlen.c
 ft_toupper.c ft_isalnum.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c
 ft_isalpha.c ft_memcmp.c ft_split.c ft_strncmp.c ft_isascii.c
 ft_memcpy.c ft_strchr.c ft_strnstr.c ft_isdigit.c 
 ft_memmove.c ft_strdup.c ft_strrchr.c
OBJECTS = $(FILES: .c=.o)
BONUS = ft_lstnew.c ft_lstadd_back.c ft_lstsize.c ft_lstclear.c 
ft_lstadd_front.c ft_lstmap.c ft_lstiter.c ft_lstlast.c ft_lstdelone.c 
OBJECTSBONUS = 