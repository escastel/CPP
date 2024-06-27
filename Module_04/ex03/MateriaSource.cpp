/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:32:18 by escastel          #+#    #+#             */
/*   Updated: 2024/06/27 18:07:16 by escastel         ###   ########.fr       */
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
		{
			if (this->_copy[i] != NULL)
				delete this->_copy[i];
			if (src._copy[i] != NULL)
				this->_copy[i] = src._copy[i]->clone();
			else
				this->_copy[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		if (this->_copy[i] != NULL)
			delete this->_copy[i];
}

void	MateriaSource::learnMateria(AMateria* learn){
	for (int i = 0; i < 4; i++)
	{
		if (this->_copy[i] == NULL)
		{
			std::cout << "Materia learned." << std::endl;
			this->_copy[i] = learn;
			return ;
		}
	}
	delete learn;
	std::cout << "Materia cannot be learned." << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type){
	for (int i = 0; i < 4; i++)
		if (this->_copy[i] && this->_copy[i]->getType() == type)
		{
			std::cout << "Type created." << std::endl;
			return (this->_copy[i]->clone());
		}
	std::cout << "Type cannot be created." << std::endl;	
	return (0);
}