/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:58:51 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 12:58:32 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->_hitPoints = 100;
	std::cout << "ScavTrap: Initial HitPoints: " << this->_hitPoints << std::endl;
	this->_energyPoints = 50;
	std::cout << "ScavTrap: Initial EnergyPoints: " << this->_energyPoints << std::endl;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: Initial AttackDamage: " << this->_attackDamage << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap: Name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	std::cout << "ScavTrap: Initial HitPoints: " << this->_hitPoints << std::endl;
	this->_energyPoints = 50;
	std::cout << "ScavTrap: Initial EnergyPoints: " << this->_energyPoints << std::endl;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: Initial AttackDamage: " << this->_attackDamage << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy){
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& src){
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints && this->_hitPoints)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
			std::cout << "EnergyPoints: " << this->_energyPoints << ", HitPoints: " << this->_hitPoints << std::endl;
	}
	if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " does not have enough energy points to attack " << target << ".\n EnergyPoints: " << this->_energyPoints << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap" << this->_name << " is dead, " << this->_name << " cannot attack " << target << ".\n HitPoints: " << this->_hitPoints << std::endl;
}

void	ScavTrap::guardGate(){
	if (this->_energyPoints && this->_hitPoints)
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " is dead, " << this->_name << " cannot be in Gate keeper." << ".\n HitPoints: " << this->_hitPoints << std::endl;
	
}