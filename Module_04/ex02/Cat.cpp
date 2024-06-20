/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:45:59 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 19:06:44 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brainCat = new Brain();
}

Cat::Cat(const Cat& copy){
	std::cout << "Cat: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Cat& Cat::operator = (const Cat& src){
	std::cout << "Cat: Copy assignment constructor called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brainCat = new Brain(*src._brainCat);
	}
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->_brainCat;
}

Brain*	Cat::getBrain(void)const{
	return (this->_brainCat);
}

void	Cat::makeSound(void)const{
	std::cout << "Meow~" << std::endl;
}