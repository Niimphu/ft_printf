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

SRC = 	ft_printf.c

OBJ = $(SRC:.c=.o)

NAME = libftprint.a

all : $(NAME)

$(NAME) : $(OBJ)
		cd ./libft_copy/ && make
		$(CC) $(CFLAGS) -c $(SRC)
		$(AR) $(NAME) $(OBJ) ./libft_copy/libft.a

clean :
		rm -f $(OBJ)
		cd ./libft_copy/ && make clean

fclean : clean
		 rm -f $(NAME)
		 cd ./libft_copy/ && make fclean

re : fclean all

.PHONY : all clean fclean re