# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:08:53 by escastel          #+#    #+#              #
#    Updated: 2024/06/07 16:09:01 by escastel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FILE = megaphone.cpp

OBJECT = $(FILE:%.cpp=obj/%.o)

FLAGS = -std=c++98 -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(OBJECT)
			@ c++ $(FLAGS) -o $(NAME) $(OBJECT)

$(OBJECT):	obj/%.o : %.cpp
			@ mkdir -p obj
			@ c++ $(FLAGS) -c $< -o $@

clean:
			@ rm -rf $(OBJECT) obj

fclean:		clean
			@ rm -rf $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re