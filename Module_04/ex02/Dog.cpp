/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:50:12 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 19:06:37 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	std::cout << "Dog: Default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brainDog = new Brain();
}

Dog::Dog(const Dog& copy){
	std::cout << "Dog: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Dog& Dog::operator = (const Dog& src){
	std::cout << "Dog: Copy assignment constructor called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brainDog = new Brain(*src._brainDog);
	}
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->_brainDog;
}

Brain*	Dog::getBrain(void)const{
	return (this->_brainDog);
}

void	Dog::makeSound(void)const{
	std::cout << "Woof Woof!" << std::endl;
}