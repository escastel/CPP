# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 17:03:36 by escastel          #+#    #+#              #
#    Updated: 2024/06/07 16:47:43 by escastel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FILES =  Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJECTS = $(FILES:%.cpp=obj/%.o)

FLAGS = -std=c++98 -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(OBJECTS)
			@ c++ $(FLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS):	obj/%.o : %.cpp
			@ mkdir -p obj
			@ c++ $(FLAGS) -c $< -o $@

clean:
			@ rm -rf $(OBJECTS) obj

fclean:		clean
			@ rm -rf $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re