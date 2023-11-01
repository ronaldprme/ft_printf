# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rprocopi <rprocopi@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 13:55:31 by rprocopi          #+#    #+#              #
#    Updated: 2023/11/01 14:36:15 by rprocopi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Werror -Wextra

SOURCE=ft_argument.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_printf.c ft_putunbr.c
OBJ=$(SOURCE:.c=.o)

NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
