# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 09:34:36 by hmunoz-g          #+#    #+#              #
#    Updated: 2024/09/10 09:35:02 by hmunoz-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/
SRC = srcs/ft_swap.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c
OFILES  = ft_swap.o	ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OFILES)
clean:
	rm -rf *.o 

fclean: clean
	rm $(NAME)

re: fclean all
