/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:28:43 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 14:06:10 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardon", 25, 5){
	this->_target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardon", 22, 5){
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy){
	if (this != &copy)
		*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& src){
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

std::string	PresidentialPardonForm::getTarget() const{
	return (this->_target);
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	try
	{
		if (this->getSigned() == false)
			throw AForm::NotSignedException();
		else
		{
			if (executor.getGrade() > this->getGradeExecute())
				throw AForm::GradeTooLowException();
			else
			{
				std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
				return (true);
			}
		}
		return (false);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
}

std::ostream&	operator<<(std::ostream &out, const PresidentialPardonForm &src){
	return (out << "Form " << src.getName() << " has target " << src.getTarget() << ". Grade to sign: " << src.getGradeSign() << ", grade to execute: " << src.getGradeExecute() << ", signature actual status: " << src.getSigned() << ".");	
}