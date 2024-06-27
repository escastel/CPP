/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:23:28 by escastel          #+#    #+#             */
/*   Updated: 2024/06/27 17:45:50 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
	this->_type = "cure";
}

Cure::Cure(const Cure& copy){
	if (this != &copy)
		*this = copy;
}

Cure&	Cure::operator = (const Cure& src){
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

Cure::~Cure(){}

AMateria*	Cure::clone() const{
	AMateria* newCure = new Cure(*this);
	return (newCure);
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}