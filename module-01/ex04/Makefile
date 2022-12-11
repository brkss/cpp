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

NAME = sed 

CC = 	c++

FLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =  main.cpp

all : $(NAME)

$(NAME):
	c++ $(SRC) -o $(NAME) $(FLAGS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
