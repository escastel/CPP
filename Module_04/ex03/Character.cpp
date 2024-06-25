/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:13:26 by escastel          #+#    #+#             */
/*   Updated: 2024/06/25 16:30:56 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	this->_name = "Default";
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
}

Character::Character(std::string name){
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
}

Character::Character(const Character& copy){
	if (this != &copy)
		*this = copy;
}

Character& Character::operator = (const Character& src){
	if (this != &src)
	{
		this->_name = getName();
		for (int i = 0; i < 4; i++)
			this->_slot[i] = src._slot[i];
	}
	return (*this);
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		delete this->_slot[i];
	delete this->_slot;
}

std::string const&	Character::getName()const{
	return (this->_name);
}

void				Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] == NULL)
		{
			this->_slot[i] == m;
			break ;
		}
	}
	std::cout << "Inventory is full." << std::endl;
}

void				Character::unequip(int idx){
	if (idx != 3)
	{
		this->_slot[idx] = NULL;	
	}
} // PUEDE QUE TENGA QUE PASAR LOS SLOTS HACIA A DELANTE

void				Character::use(int idx, Character& target){}