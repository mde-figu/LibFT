# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/11 12:06:18 by mde-figu          #+#    #+#              #
#    Updated: 2021/02/22 14:47:29 by mde-figu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMP = clang

FLAGS = -Wall -Werror -Wextra

CFLAGS = -Wall -Werror -Wextra -I./ -c

LIB = ar -rc

RLIB = ranlib

RM = rm -f

HEADER = libft.h

FILES = ft_isprint.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_atoi.c \
 ft_itoa.c ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_bzero.c \
 ft_putendl_fd.c ft_strlcpy.c ft_tolower.c \
 ft_calloc.c ft_memccpy.c ft_putnbr_fd.c ft_strlen.c \
 ft_toupper.c ft_isalnum.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c \
 ft_isalpha.c ft_memcmp.c ft_strncmp.c ft_isascii.c \
 ft_memcpy.c ft_strchr.c ft_strnstr.c ft_isdigit.c \
 ft_memmove.c ft_strdup.c ft_strrchr.c ft_split.c

OBJECTS = $(FILES:.c=.o)

BONUS = ft_lstclear.c ft_lstdelone.c ft_lstlast.c ft_lstlast.c ft_lstnew.c \
 ft_lstsize.c

BOBJECTS = $(BONUS:.c=.o)

$(NAME):	$(OBJECTS) 
			$(COMP) -c $(FILES)
			$(LIB) $(NAME) $(OBJECTS)
			$(RLIB) $(NAME)

all:	$(NAME)

bonus:		$(NAME) $(BOBJECTS)
			$(LIB) $(NAME) $(BOBJECTS)
			$(RLIB) $(NAME)

.c.o:	$(COMP) $(FLAGS) -c $< -o $(<:.c=.o)

so:
	$(COMP) -fPIC $(CFLAGS) $(FILES)
	gcc -shared -o libft.so $(OBJECTS)

clean:
		$(RM) $(OBJECTS) $(BOBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

rebonus:	fclean bonus

.PHONY: all clean fclean re bonus rebonus
