/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:24:48 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 17:21:17 by escastel         ###   ########.fr       */
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
        std::cout << "Sign form: ";
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    std::cout <<"\n\n------------------------\n\n" << std::endl;
    try 
	{
        Bureaucrat  bureaucrat1("Mondongo", 4);
        Form        form1("Formulario1", 2);
		std::cout << bureaucrat1 << std::endl;
		std::cout << form1 << std::endl;
        std::cout << "Sign form: ";
        bureaucrat1.signForm(form1);
        std::cout << form1 << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
}