/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:50:12 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 15:00:03 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	std::cout << "Dog: Default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& copy){
	std::cout << "Dog: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Dog& Dog::operator = (const Dog& src){
	std::cout << "Dog: Copy assignment constructor called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog: Destructor called" << std::endl;
}

void	Dog::makeSound(void)const{
	std::cout << "Woof Woof!" << std::endl;
}