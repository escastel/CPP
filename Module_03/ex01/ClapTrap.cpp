/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:03:00 by escastel          #+#    #+#             */
/*   Updated: 2024/06/21 13:45:13 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap: Default constructor called" << std::endl;
	this->_name = "Default";
	this->_hitPoints = 10;
	std::cout << "ClapTrap: Initial HitPoints: " << this->_hitPoints << std::endl;
	this->_energyPoints = 10;
	std::cout << "ClapTrap: Initial EnergyPoints: " << this->_energyPoints << std::endl;
	this->_attackDamage = 0;
	std::cout << "ClapTrap: Initial AttackDamage: " << this->_attackDamage << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap: Name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	std::cout << "ClapTrap: Initial HitPoints: " << this->_hitPoints << std::endl;
	this->_energyPoints = 10;
	std::cout << "ClapTrap: Initial EnergyPoints: " << this->_energyPoints << std::endl;
	this->_attackDamage = 0;
	std::cout << "ClapTrap: Initial AttackDamage: " << this->_attackDamage << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& src){
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " takes damage, losing " << amount << " points of health!" << std::endl;
		if (static_cast<int>(this->_hitPoints) - static_cast<int>(amount) >= 0)
			this->_hitPoints -= amount;
		else
			this->_hitPoints = 0;
		if (this->_hitPoints == 0)
			std::cout << "ClapTrap " << this->_name << " is dead :(.\n HitPoints: " << this->_hitPoints << std::endl;
		else
			std::cout << " EnergyPoints: " << this->_energyPoints << ", HitPoints: " << this->_hitPoints << std::endl;
		return ;
	}
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead, leave him alone :(.\n HitPoints: " << this->_hitPoints << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoints && this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " repairs itself, getting " << amount << " points back!" << std::endl;
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << " EnergyPoints: " << this->_energyPoints << ", HitPoints: " << this->_hitPoints << std::endl;
	}
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " does not have enough energy points to repair itself.\n EnergyPoints: " << this->_energyPoints << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap is dead, " << this->_name << " cannot be resurrected.\n HitPoints: " << this->_hitPoints << std::endl;
}
void	ClapTrap::attack(const std::string& target){
	if (this->_energyPoints && this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
			std::cout << " EnergyPoints: " << this->_energyPoints << ", HitPoints: " << this->_hitPoints << std::endl;
	}
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " does not have enough energy points to attack " << target << ".\n EnergyPoints: " << this->_energyPoints << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap is dead, " << this->_name << " cannot attack " << target << ".\n HitPoints: " << this->_hitPoints << std::endl;
}