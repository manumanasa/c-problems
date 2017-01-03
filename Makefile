# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mputsala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/12 13:00:56 by mputsala          #+#    #+#              #
#    Updated: 2017/01/03 14:35:53 by mputsala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =ft_atoi.c \
	ft_isascii.c \
	ft_putnbr.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_putchar_fd.c \
	ft_strsub.c \
	ft_putstr.c \
	ft_putendl.c \
	ft_putchar.c \
	ft_strjoin.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_strmapi.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_strnstr.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_isdigit.c \
	ft_memchr.c \
	ft_memset.c \
	ft_strcpy.c \
	ft_strncat.c \
	ft_strrchr.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_memcmp.c \
	ft_strcat.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_strstr.c \
	ft_isalpha.c \
   	ft_isspace.c \
   	ft_memcpy.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strncpy.c \
	ft_tolower.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_strnew.c \
	ft_strdel.c \
	ft_strclr.c \
	ft_striter.c \
	ft_strmap.c \
	ft_striteri.c \

HEAD = libft.h

all : $(NAME)

OBJ = $(SRC:.c=.o)

$(NAME) : $(SRC) $(HEAD)
		gcc -Wall -Wextra -Werror -I include -c $(SRC)
		ar rc  $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all




