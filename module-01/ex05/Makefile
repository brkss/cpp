# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bberkass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 02:16:20 by bberkass          #+#    #+#              #
#    Updated: 2022/12/23 19:07:49 by bberkass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl 

CC = 	c++

FLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =  Harl.cpp main.cpp

all : $(NAME)

$(NAME):
	c++ $(SRC) -o $(NAME) $(FLAGS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
