/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:19:30 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 15:02:34 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal: Default constructor called" << std::endl;
	this->_type = "-No type-";
}

Animal::Animal(const Animal& copy){
	std::cout << "Animal: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Animal&	Animal::operator = (const Animal& src){
	std::cout << "Animal: Copy assignment constructor called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal: Destructor called" << std::endl;
}

std::string	Animal::getType(void)const{
	return (this->_type);
}

void	Animal::makeSound(void)const{
	std::cout << "Cri, cri, cri...*Nothing sounds*" << std::endl;
}