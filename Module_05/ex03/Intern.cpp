/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:20:53 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 16:27:08 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& copy){
	if (this != &copy)
		*this = copy;
}
Intern& Intern::operator = (const Intern& src){
	(void)src;
	return (*this);
}
Intern::~Intern(){}

AForm	*Intern::makeForm(std::string formName, std::string target){
	std::string	formArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	for (int i = 0; i < 3; i++)
	{
		if (formArray[i] == formName)
		{
			switch (i)
			{
				case 0:
					std::cout << "Intern creates " << formName << "." << std::endl;
					return (new ShrubberyCreationForm(target));
				case 1:
					std::cout << "Intern creates " << formName << "." << std::endl;
					return (new RobotomyRequestForm(target));
				case 2:
					std::cout << "Intern creates " << formName << "." << std::endl;
					return (new PresidentialPardonForm(target));
				default:
					break;
			}
		}	
	}
	std::cout << "Error ! Invalid Form name" << std::endl;
	return (NULL);
}