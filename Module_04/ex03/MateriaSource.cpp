/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:32:18 by escastel          #+#    #+#             */
/*   Updated: 2024/06/25 18:01:14 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		this->_copy[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy){
	if (this != &copy)
		*this = copy;
}

MateriaSource&	MateriaSource::operator = (const MateriaSource& src){
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			this->_copy[i] = src._copy[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		delete this->_copy[i];
	delete this->_copy;
}

void	MateriaSource::learnMateria(AMateria* learn){
	for (int i = 0; i < 4; i++)
	{
		if (this->_copy[i] == NULL)
		{
			this->_copy[i] == learn;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type){}