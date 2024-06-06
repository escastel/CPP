/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:51:26 by escastel          #+#    #+#             */
/*   Updated: 2024/06/06 15:27:25 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact(void){}
Contact::Contact(void){
	fields[0] = "First Name: ";
	fields[1] = "Last Name: ";
	fields[2] = "Nickname: ";
	fields[3] = "Phone Number: ";
	fields[4] = "Darket Secret: ";
}

void	Contact::save_contact(){
	int			i;
	int			j;

	for (i = 0; i < 5; i++)
	{
		std::cout << fields[i];
		std::getline(std::cin, data[i]);
		if (data[i].empty())
		{
			std::cout << "Wrong input: Contact can’t have empty fields." << std::endl;
			i--;
			continue;
		}
		if (i == 3)
		{
			for (j = 0; data[i][j]; j++)
			{
				if (!(data[i][j] >= '0' && data[i][j] <= '9'))
				{
					std::cout << "Wrong input: Phone Number must be a digit." << std::endl;
					i--;
					continue;
				}
			}
		}
	}
}

void	Contact::print_contact(){
	int	i;

	for (i = 0; i < 5; i++)
		std::cout << fields[i] << data[i] << std::endl;
}

void	Contact::print_search(int flag, int index){
	int	i;
	int	j;
	int	len;

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
		for (i = 0; i < 3; i++)
		{
			std::cout << "|";
			if (data[i].length() <= 10)
			{
				for (len = 10 - data[i].length(); len > 0; len--)
					std::cout << " ";
				for (j = 0; data[i][j]; j++)
					std::cout << data[i][j];
			}
			if (data[i].length() > 10)
			{
				for (j = 0; j < 9; j++)
					std::cout << data[i][j];
				if (j == 9)
					std::cout << ".";
			}
		}
		std::cout << "|" << std::endl;
	}
}