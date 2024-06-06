/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:30:38 by escastel          #+#    #+#             */
/*   Updated: 2024/06/06 15:51:57 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook(void){}
PhoneBook::PhoneBook(void)
{
	index = 0;
	count = 0;
}

void	PhoneBook::add_contact(){
	if (count == 8)
	{
		std::cout << "PhoneBook is full.\nThe new contact will replace the oldest one" << std::endl;
		if (index > 7)
			index = 0;
	}
	contacts[index].save_contact();
	std::cout << "Contact has been saved" << std::endl;
	if (count < 8)
		count++;
	index++;
}

void	PhoneBook::search_contact(){
	int	i;
	int	input_index;
	std::string input;

	if (count == 0)
		std::cout << "PhoneBook is empty" << std::endl;
	else if (count != 0)
	{
		contacts->print_search(1, 0);
		for (i = 0; i < count; i++)
			contacts[i].print_search(0, i + 1);
		while (1)
		{
			std::cout << "Choose contact index: ";
			std::getline(std::cin, input);
			if (input[0] >= '1' && input[0] <= '8' && !input[1])
			{
				input_index = (input[0] - '1');
				if (input_index < count)
				{
					contacts[input_index].print_contact();
					break ;
				}
				else
					std::cout << "Wrong input: Please, choose a correct index" << std::endl;
			}
			else
				std::cout << "Wrong input: Please, choose a correct index" << std::endl;
		}
	}
}

void	PhoneBook::pb_software(){
	std::string	input;
	
	while (1)
	{
		std::cout << "\n             »»—————- CHOOSE AN OPTION —————-««\n" << std::endl;
		std::cout << "             »»————————- ADD        ————————-««" << std::endl;
		std::cout << "             »»————————- SEARCH     ————————-««" << std::endl;
		std::cout << "             »»————————- EXIT       ————————-««\n" << std::endl;
		std::cout << "→ WRITE YOUR OPTION: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		if (input == "ADD")
		{
			add_contact();
			continue ;
		}
		if (input == "SEARCH")
		{
			search_contact();
			continue ;
		}
		else
			std::cout << "Wrong input: Please, choose a correct option" << std::endl;
	}
}