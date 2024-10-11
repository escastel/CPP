/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:28:36 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 14:06:22 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequest", 72, 45){
	this->_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequest", 72, 45){
	this->_target = target;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy){
	if (this != &copy)
		*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& src){
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

std::string	RobotomyRequestForm::getTarget() const{
	return (this->_target);
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
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
				std::cout << "*Makes some drilling noises*" << std::endl;
				if (time(NULL) % 2)
					std::cout << this->_target << " has been robotomized successfully." << std::endl;
				else
					std::cout << "The robotomy failed." << std::endl;
				return (true);
			}
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
}

std::ostream&	operator<<(std::ostream &out, const RobotomyRequestForm &src){
	return (out << "Form " << src.getName() << " has target " << src.getTarget() << ". Grade to sign: " << src.getGradeSign() << ", grade to execute: " << src.getGradeExecute() << ", signature actual status: " << src.getSigned() << ".");	
}