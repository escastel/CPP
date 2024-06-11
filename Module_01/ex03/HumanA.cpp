/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:51:28 by escastel          #+#    #+#             */
/*   Updated: 2024/06/10 16:07:54 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn){
	this->name = name;
	this->wpn = &wpn;
};
HumanA::~HumanA(){};

void HumanA::attack(void){

	std::cout << this->name << " attacks with their " << this->wpn->getType() << std::endl;
}