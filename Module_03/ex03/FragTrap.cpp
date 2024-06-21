/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:38:39 by escastel          #+#    #+#             */
/*   Updated: 2024/06/21 13:46:05 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->_name = "Default";
	this->_hitPoints = 100;
	std::cout << "FragTrap: Initial HitPoints: " << this->_hitPoints << std::endl;
	this->_energyPoints = 100;
	std::cout << "FragTrap: Initial EnergyPoints: " << this->_energyPoints << std::endl;
	this->_attackDamage = 30;
	std::cout << "FragTrap: Initial AttackDamage: " << this->_attackDamage << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << "FragTrap: Name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	std::cout << "FragTrap: Initial HitPoints: " << this->_hitPoints << std::endl;
	this->_energyPoints = 100;
	std::cout << "FragTrap: Initial EnergyPoints: " << this->_energyPoints << std::endl;
	this->_attackDamage = 30;
	std::cout << "FragTrap: Initial AttackDamage: " << this->_attackDamage << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy){
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

FragTrap& FragTrap::operator = (const FragTrap& src){
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	if (this->_hitPoints)
		std::cout << "FragTrap " << this->_name << " wanna high fives !" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " is dead, now he cannot give a high five..." << std::endl;
}