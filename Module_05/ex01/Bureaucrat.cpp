/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:24:50 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 14:07:20 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"){
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name){
	if (this != &copy)
		*this = copy;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& src){
	if (this != &src)
	{
		if (src._grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (src._grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::string const	Bureaucrat::getName()const{
	return (this->_name);
}

int		Bureaucrat::getGrade()const{
	return (this->_grade);
}

void	Bureaucrat::signForm(Form &signature){
	if (signature.getSigned() == false)
	{
		signature.beSigned(*this);
		if (signature.getSigned() == true)
			std::cout << this->_name << " signed " << signature.getName() << "." << std::endl;
		else
			std::cout << this->_name << " couldn’t sign " << signature.getName() << " because bureaucrat’s grade isn't high enough."<< std::endl;	
	}
	else
		std::cout << this->_name << " signed " << signature.getName() << "." << std::endl;
}

void	Bureaucrat::incrementGrade(){
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}
void	Bureaucrat::decrementGrade(){
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &src){
	return (out << src.getName() << ", bureaucrat grade " << src.getGrade() << ".");	
}