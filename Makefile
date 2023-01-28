# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yiwong <yiwong@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 19:28:14 by yiwong            #+#    #+#              #
#    Updated: 2023/01/27 19:28:14 by yiwong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

AR = ar rcs

DEPS = libftprint.h ./libft_copy/libft.h

SRC = 	ft_printf.c \
		./libft_copy/ft_is*.c \
		./libft_copy/ft_to*.c \
		./libft_copy/ft_str*.c \
		./libft_copy/ft_mem*.c \
		./libft_copy/ft_put*.c \
		./libft_copy/ft_atoi.c \
		./libft_copy/ft_itoa.c \
		./libft_copy/ft_bzero.c \
		./libft_copy/ft_calloc.c \
		./libft_copy/ft_substr.c \
		./libft_copy/ft_split.c

OBJ = $(SRC:.c=.o) *.o

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) -c $(SRC)
		$(AR) $(NAME) $(OBJ)

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re