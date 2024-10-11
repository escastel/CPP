/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:36:39 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 14:07:03 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name("Default"), _gradeSign(150), _gradeExecute(150){
	this->_signed = false;
}

Form::Form(std::string name, int gradeSign):_name(name), _gradeSign(gradeSign), _gradeExecute(150){
	this->_signed = false;
	try
	{
		if (gradeSign > 150)
			throw Bureaucrat::GradeTooLowException();
		if (gradeSign < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form::Form(const Form& copy): _name(copy._name), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute){
	if (this != &copy)
		*this = copy;
}

Form& Form::operator = (const Form& src){
	if (this != &src)
	{
		this->_signed = getSigned();
		if (src._gradeSign > 150 || src._gradeExecute > 150)
			throw Form::GradeTooLowException();
		if (src._gradeSign < 1 || src._gradeExecute < 1)
			throw Form::GradeTooHighException();
	}
	return (*this);
}

Form::~Form(){}

std::string const	Form::getName() const{
	return (this->_name);
}

int		Form::getGradeSign() const{
	return (this->_gradeSign);
}

int		Form::getGradeExecute() const{
	return (this->_gradeExecute);
}

bool	Form::getSigned() const{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}
const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

std::ostream&	operator<<(std::ostream &out, const Form &src){
	return (out << src.getName() << ", form grade required to sign it " << src.getGradeSign() << ", grade required to execute it " << src.getGradeExecute() << " signature actual status: " << src.getSigned() << ".");	
}