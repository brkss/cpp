# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bberkass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 02:16:20 by bberkass          #+#    #+#              #
#    Updated: 2022/09/26 02:24:35 by bberkass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	megaphone

CC = 	c++

FLAGS =	-Wall -Wextra -Werror

SRC = 	megaphone.cpp


all : $(NAME)

$(NAME):
	c++ $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
