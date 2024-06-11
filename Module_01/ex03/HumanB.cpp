/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:51:25 by escastel          #+#    #+#             */
/*   Updated: 2024/06/10 16:07:56 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	name){
	this->name = name;
};
HumanB::~HumanB(){};

void HumanB::attack(void){
	std::cout << this->name << " attacks with their " << this->wpn->getType() << std::endl;
};

void HumanB::setWeapon(Weapon &wpn){
	this->wpn = &wpn;
};