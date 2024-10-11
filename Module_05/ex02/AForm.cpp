/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:36:39 by escastel          #+#    #+#             */
/*   Updated: 2024/10/09 18:32:13 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():_name("Default"), _gradeSign(150), _gradeExecute(150){
	this->_signed = false;
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute):_name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute){
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

AForm::AForm(const AForm& copy): _name(copy._name), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute){
	if (this != &copy)
		*this = copy;
}

AForm& AForm::operator = (const AForm& src){
	if (this != &src)
	{
		this->_signed = getSigned();
		if (src._gradeSign > 150 || src._gradeExecute > 150)
			throw AForm::GradeTooLowException();
		if (src._gradeSign < 1 || src._gradeExecute < 1)
			throw AForm::GradeTooHighException();
	}
	return (*this);
}

AForm::~AForm(){}

std::string const	AForm::getName() const{
	return (this->_name);
}

int		AForm::getGradeSign() const{
	return (this->_gradeSign);
}

int		AForm::getGradeExecute() const{
	return (this->_gradeExecute);
}

bool	AForm::getSigned() const{
	return (this->_signed);
}

void	AForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}
const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}
const char	*AForm::NotSignedException::what() const throw()
{
	return ("Form not signed.");
}

std::ostream&	operator<<(std::ostream &out, const AForm &src){
	return (out << src.getName() << ", AForm grade required to sign it " << src.getGradeSign() << ", grade required to execute it " << src.getGradeExecute() << " actual status: " << src.getSigned() << ".");	
}