/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:02:47 by escastel          #+#    #+#             */
/*   Updated: 2024/06/19 19:51:42 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap(){
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << "DiamondTrap: Initial HitPoints: " << this->_hitPoints << std::endl;
	this->_energyPoints = ScavTrap::_energyPoints;
	std::cout << "DiamondTrap: Initial EnergyPoints: " << this->_energyPoints << std::endl;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap: Initial AttackDamage: " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name){
	std::cout << "DiamondTrap: Name constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << "DiamondTrap: Initial HitPoints: " << this->_hitPoints << std::endl;
	this->_energyPoints = ScavTrap::_energyPoints;
	std::cout << "DiamondTrap: Initial EnergyPoints: " << this->_energyPoints << std::endl;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap: Initial AttackDamage: " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy){
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

DiamondTrap DiamondTrap::operator = (const DiamondTrap& src){
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " <<  ClapTrap::_name << std::endl;
}