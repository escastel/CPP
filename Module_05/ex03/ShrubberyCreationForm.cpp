/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:28:39 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 14:06:38 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreation", 145, 137){
	this->_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreation", 145, 137){
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy){
	if (this != &copy)
		*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& src){
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

std::string	ShrubberyCreationForm::getTarget() const{
	return (this->_target);
}

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
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
				std::ofstream form((this->_target + "_shrubbery").c_str());
				if (!form)
				{
					std::cout << "Error! Cannot create the file." << std::endl;
					return (false);
				}
				if (form.is_open())
				{
					form << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
					form << "⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⡰⡇⠁⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
					form << "⠀⠀⠀⠀⠀⠀⠀⠀⠰⢾⠇⠨⡦⠀⠂⠀⠀⠀⠀⠀⠀" << std::endl;
					form << "⠀⠀⠀⠀⠀⠀⡀⠀⢈⣹⠜⠻⢾⠃⠀⠀⠀⠀⠀⠀⠀" << std::endl;
					form << "⠀⠀⠀⠀⠀⠀⠁⢠⣿⡵⠾⣻⣶⠿⠦⠀⠀⠀⠀⠀⠀" << std::endl;
					form << "⠀⠀⠀⠀⢀⠀⢀⣠⣮⣦⡶⠻⠛⢶⣄⡀⠁⠀⠀⠀⠀" << std::endl;
					form << "⠀⠀⠀⠀⠀⠀⢀⣽⠏⠁⣠⣂⣦⣈⣝⣦⣄⠀⠈⠁⠀" << std::endl;
					form << "⠀⠀⠀⠀⠁⣠⣾⣵⣾⣾⠟⡙⠟⠿⣍⡉⠀⠀⠆⠀⠀" << std::endl;
					form << "⠀⠰⠀⠀⠄⣠⣶⣾⣭⡶⠟⠻⣶⡰⣜⣳⣦⣄⠀⡀⠀" << std::endl;
					form << "⠀⠀⠀⢀⣠⣴⣿⣋⡴⣪⠎⣄⡙⠻⠿⣯⣉⠉⠀⠀⠀" << std::endl;
					form << "⠀⠂⠀⢀⣉⡭⢿⡛⣛⣵⠎⠀⠙⢾⣶⣦⣭⣷⣦⠐⠀" << std::endl;
					form << "⠀⠀⢈⣙⣿⡿⠿⠟⣋⢅⡄⡄⡐⣄⢤⣉⠷⢦⣄⣀⠠" << std::endl;
					form << "⠐⠾⠿⢽⣷⡶⠶⡿⣓⣭⣾⣿⢷⣬⣓⢿⠿⠿⣯⣉⣁" << std::endl;
					form << "⠀⠀⠀⠉⠉⠉⠛⠛⠉⢀⣿⢿⡀⠙⠋⠓⠿⠿⠏⠉⠉" << std::endl;
					form << "⠀⠀⠀⠀⠀⠀⠠⠤⠶⠾⢿⡯⠷⠶⠤⠄⠀⠀⠀⠀⠀" << std::endl;
					form.close();
					return (true);
				}
				else
				{
					std::cout << "Error! The file cannot be opened." << std::endl;
					return (false);
				}
			}
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
}

std::ostream&	operator<<(std::ostream &out, const ShrubberyCreationForm &src){
	return (out << "Form " << src.getName() << " has target " << src.getTarget() << ". Grade to sign: " << src.getGradeSign() << ", grade to execute: " << src.getGradeExecute() << ", signature actual status: " << src.getSigned() << ".");	
}