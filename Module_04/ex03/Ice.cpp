/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:21:51 by escastel          #+#    #+#             */
/*   Updated: 2024/06/27 17:46:29 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	this->_type = "ice";
}

Ice::Ice(const Ice& copy){
	if (this != &copy)
		*this = copy;
}

Ice&	Ice::operator = (const Ice& src){
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

Ice::~Ice(){}

AMateria*	Ice::clone() const{
	AMateria* newIce = new Ice(*this);
	return (newIce);
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}