# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 20:09:31 by fsuomins          #+#    #+#              #
#    Updated: 2023/03/14 14:43:51 by fsuomins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = main.c push_swap.c list_creat.c checks.c position.c movement.c movement2.c radix_sort.c
INCLUDES = libft/libft.a 
CC = cc

all: $(NAME)

$(NAME):
	make -C libft
	$(CC) -g $(SRC) $(INCLUDES) -o $(NAME)

clean:
	make fclean -C libft

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
