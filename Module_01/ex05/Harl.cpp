/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:52:35 by escastel          #+#    #+#             */
/*   Updated: 2024/06/11 12:49:59 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void	Harl::debug(void){
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
};

void	Harl::info(void){
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
};

void	Harl::warning(void){
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
};

void	Harl::error(void){
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
};

void	Harl::complain(std::string level){
	void (Harl::*funtions[4])(void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i]))
		{
			(this->*funtions[i])();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
