/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:45:59 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 14:59:56 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& copy){
	std::cout << "Cat: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Cat& Cat::operator = (const Cat& src){
	std::cout << "Cat: Copy assignment constructor called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat: Destructor called" << std::endl;
}

void	Cat::makeSound(void)const{
	std::cout << "Meow~" << std::endl;
}