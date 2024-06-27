/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:13:26 by escastel          #+#    #+#             */
/*   Updated: 2024/06/27 17:57:28 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	this->_name = "Default";
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	for (int i = 0; i < 500; i++)
		this->_rest[i] = NULL;
}

Character::Character(std::string name){
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	for (int i = 0; i < 500; i++)
		this->_rest[i] = NULL;
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
		{
			if (this->_slot[i] != NULL)
				delete this->_slot[i];
			if (src._slot[i] != NULL)
				this->_slot[i] = src._slot[i]->clone();
			else
				this->_slot[i] = NULL;
		}
		for (int i = 0; i < 500; i++)
		{
			if (this->_rest[i] != NULL)
				delete this->_rest[i];
			if (src._rest[i] != NULL)
				this->_rest[i] = src._rest[i]->clone();
			else
				this->_rest[i] = NULL;	
		}
	}
	return (*this);
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		if (this->_slot[i] != NULL)
			delete this->_slot[i];
	for (int i = 0; i < 500; i++)
		if (this->_rest[i] != NULL)
			delete this->_rest[i];
}

std::string const&	Character::getName()const{
	return (this->_name);
}

void	Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] == NULL)
		{
			this->_slot[i] = m;
			std::cout << "Materia equipped." << std::endl;
			return ;
		}
	}
	std::cout << "Materia could not be equipped, inventory is full." << std::endl;
	for (int i = 0; i < 500; i++)
	{
		if (this->_rest[i] == NULL)
		{
			this->_rest[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx){
	if (idx <= 3 && this->_slot[idx] != NULL)
	{
		for (int i = 0; i < 500; i++)
		{
			if (this->_rest[i] == NULL)
			{
				this->_rest[i] = this->_slot[idx];
				break ;
			}
		}
		this->_slot[idx] = NULL;
		std::cout << "Materia unequipped." << std::endl;
	}
	std::cout << "Materia could not be unequipped." << std::endl;
}

void	Character::use(int idx, ICharacter& target){
	if (idx > 3)
		std::cout << "Incorrect index." << std::endl;
	if (idx <= 3)
		if (this->_slot[idx] != NULL)
			this->_slot[idx]->use(target);
}