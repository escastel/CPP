/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:24:48 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 17:22:29 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) 
{
	try 
	{
        Bureaucrat              bureaucrat("Nacho", 137);
        ShrubberyCreationForm   scf("Nacho");
        std::cout << bureaucrat << std::endl;
        std::cout << scf << std::endl;
        std::cout << "Sign form: ";
        bureaucrat.signForm(scf);
        std::cout << "Execute form: ";
        bureaucrat.executeForm(scf);
        std::cout << scf << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    std::cout <<"\n\n------------------------\n\n" << std::endl;
    try 
	{
        Bureaucrat              bureaucrat1("Mondongo", 45);
        RobotomyRequestForm     rrf("Mondongo");
        std::cout << bureaucrat1 << std::endl;
        std::cout << rrf << std::endl;
        std::cout << "Sign form: ";
        bureaucrat1.signForm(rrf);
        std::cout << "Execute form: ";
        bureaucrat1.executeForm(rrf);
        std::cout << rrf << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    std::cout <<"\n\n------------------------\n\n" << std::endl;
    try 
	{
        Bureaucrat                  bureaucrat2("Vohue", 5);
        PresidentialPardonForm      ppf("Vohue");
        std::cout << bureaucrat2 << std::endl;
        std::cout << ppf << std::endl;
        std::cout << "Sign form: ";
        bureaucrat2.signForm(ppf);
        std::cout << "Execute form: ";
        bureaucrat2.executeForm(ppf);
        std::cout << ppf << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
}