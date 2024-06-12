/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:51:26 by escastel          #+#    #+#             */
/*   Updated: 2024/06/12 17:36:23 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact(){}
Contact::Contact(){
	_fields[0] = "First Name: ";
	_fields[1] = "Last Name: ";
	_fields[2] = "Nickname: ";
	_fields[3] = "Phone Number: ";
	_fields[4] = "Darket Secret: ";
}

void	Contact::saveContact(){

	int	i;

	i = 0;
	while (i < 5)
	{
		std::cout << _fields[i];
		std::getline(std::cin, _data[i]);
		for (int j = 0; j < 1; j++)
		{
			if (_data[i].empty())
			{
				std::cout << "Wrong input: Contact can’t have empty fields." << std::endl;
				i--;
				break;
			}
		}
		if (i == 3)
		{
			for (int j = 0; _data[i][j]; j++)
			{
				if (!(_data[i][j] >= '0' && _data[i][j] <= '9'))
				{
					std::cout << "Wrong input: Phone Number must be a digit." << std::endl;
					i--;
					break;
				}
			}
		}
		i++;
	}
}

void	Contact::printContact(){
	for (int i = 0; i < 5; i++)
		std::cout << _fields[i] << _data[i] << std::endl;
}

void	Contact::printSearch(int flag, int index){
	int	j;

	if (flag)
	{
		std::cout << "|     INDEX|";
		std::cout << "FIRST NAME|";
		std::cout << " LAST NAME|";
		std::cout << "  NICKNAME|" << std::endl;
	}
	else
	{
		std::cout << "|";
		std::cout << "         " << index;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "|";
			if (_data[i].length() <= 10)
			{
				for (int len = 10 - _data[i].length(); len > 0; len--)
					std::cout << " ";
				for (j = 0; _data[i][j]; j++)
					std::cout << _data[i][j];
			}
			if (_data[i].length() > 10)
			{
				for (j = 0; j < 9; j++)
					std::cout << _data[i][j];
				if (j == 9)
					std::cout << ".";
			}
		}
		std::cout << "|" << std::endl;
	}
}