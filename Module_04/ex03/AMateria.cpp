/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:35:31 by escastel          #+#    #+#             */
/*   Updated: 2024/06/27 17:24:39 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	this->_type = "Default";
}

AMateria::AMateria(std::string const& type){
	this->_type = type;
}

AMateria::AMateria(const AMateria& copy){
	if (this != &copy)
		*this = copy;
}

AMateria&	AMateria::operator =(const AMateria& src){
	if (this != &src)
		this->_type = getType();
	return (*this);
}

AMateria::~AMateria(){}

std::string const&	AMateria::getType() const{
	return (this->_type);
}
 
AMateria*	AMateria::clone()const{
	std::cout << "Materia cloned" << std::endl;
	return ((AMateria*)this);
}

void	AMateria::use(ICharacter& target){
	std::cout << "Default AMateria cannot use anything for " << target.getName() << std::endl;
}