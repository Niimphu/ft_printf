# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yiwong <yiwong@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 14:24:09 by yiwong            #+#    #+#              #
#    Updated: 2022/12/17 22:27:56 by yiwong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

AR = ar rcs

DEPS = libft.h

SRC =	ft_is*.c \
		ft_to*.c \
		ft_str*.c \
		ft_mem*.c \
		ft_put*.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_substr.c \
		ft_split.c

OBJ = $(SRC:.c=.o)

BONUS_SRC = ft_lst*.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) -c $(SRC)
		$(AR) $(NAME) $(OBJ)

bonus : $(OBJ) $(BONUS_OBJ)
		$(CC) $(CFLAGS) -c $(SRC) $(BONUS_SRC)
		$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

clean :
		 rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
		 rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
