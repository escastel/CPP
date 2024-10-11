/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:24:48 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 17:12:24 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) 
{
    {
        Intern      someRandomIntern;
        Bureaucrat  bureaucrat("Nacho", 137);
        AForm*  scf;

        scf = someRandomIntern.makeForm("shrubbery creation", "Mango");
        std::cout << *scf << std::endl;
        bureaucrat.signForm(*scf);
        bureaucrat.executeForm(*scf);
        std::cout << *scf << std::endl;
        delete scf;
    }
    std::cout <<"\n\n------------------------\n\n" << std::endl;
    {
        Intern      someRandomIntern;
        Bureaucrat  bureaucrat("Nacho", 45);
        AForm*  rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Mondongo");
        std::cout << *rrf << std::endl;
        bureaucrat.signForm(*rrf);
        bureaucrat.executeForm(*rrf);
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    std::cout <<"\n\n------------------------\n\n" << std::endl;
    {
        Intern      someRandomIntern;
        Bureaucrat  bureaucrat("Nacho", 5);
        AForm*  ppf;

        ppf = someRandomIntern.makeForm("presidential pardon", "Vohue");
        std::cout << *ppf << std::endl;
        bureaucrat.signForm(*ppf);
        bureaucrat.executeForm(*ppf);
        std::cout << *ppf << std::endl;
        delete ppf;
    }
    std::cout <<"\n\n------------------------\n\n" << std::endl;
    {
        Intern      someRandomIntern;
        AForm*  errorf;

        errorf = someRandomIntern.makeForm("Robotomy Request", "Huevo");
    }
}