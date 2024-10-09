/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:24:48 by escastel          #+#    #+#             */
/*   Updated: 2024/10/09 18:41:19 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) 
{
	try 
	{
        Bureaucrat  bureaucrat("Nacho", 2);
        Form        form("Formulario", 30);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }

    try 
	{
        Bureaucrat  bureaucrat1("Mondongo", 4);
        Form        form1("Formulario1", 2);
		std::cout << bureaucrat1 << std::endl;
		std::cout << form1 << std::endl;
        bureaucrat1.signForm(form1);
        std::cout << form1 << std::endl;
        bureaucrat1.incrementGrade();
        bureaucrat1.signForm(form1);
       std::cout << form1 << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
}