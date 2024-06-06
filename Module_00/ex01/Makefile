# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 17:03:36 by escastel          #+#    #+#              #
#    Updated: 2024/06/06 13:30:27 by escastel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FILES = PhoneBook.cpp Contact.cpp main.cpp

OBJECTS = $(FILES:%.cpp=obj/%.o)

FLAGS = -std=c++98 -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(OBJECTS)
			@ clang++ $(FLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS):	obj/%.o : %.cpp
			@ mkdir -p obj
			@ clang++ $(FLAGS) -c $< -o $@

clean:
			@rm -rf $(OBJECTS) obj

fclean:		clean
			@ rm -rf $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re