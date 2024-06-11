/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:52:23 by escastel          #+#    #+#             */
/*   Updated: 2024/06/10 16:04:57 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
};
Weapon::~Weapon(){};

std::string& Weapon::getType(void){
	std::string& type = this->type;
	return (type);
}

void	Weapon::setType(std::string new_type){
	this->type = new_type;
}