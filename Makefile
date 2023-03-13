# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 20:09:31 by fsuomins          #+#    #+#              #
#    Updated: 2023/03/09 20:10:45 by fsuomins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = 
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
