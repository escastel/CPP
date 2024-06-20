/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:50:05 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 18:01:16 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->_type = "Cat";
}

WrongCat::WrongCat(const WrongCat& copy){
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

WrongCat& WrongCat::operator = (const WrongCat& src){
	std::cout << "WrongCat: Copy assignment constructor called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat: Destructor called" << std::endl;
}

void	WrongCat::makeSound(void)const{
	std::cout << "Meow~" << std::endl;
}