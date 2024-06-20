/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:11:39 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 15:49:21 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Animal: Default constructor called" << std::endl;
	this->_type = "-No type-";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal& src){
	std::cout << "WrongAnimal: Copy assignment constructor called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void)const{
	return (this->_type);
}

void	WrongAnimal::makeSound(void)const{
	std::cout << "Cri, cri, cri...*Nothing sounds*" << std::endl;
}