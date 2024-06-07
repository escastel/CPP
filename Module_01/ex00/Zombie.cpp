/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:10:39 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 16:30:50 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << this->name << " has been destroyed" << std::endl;
}

void	Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}