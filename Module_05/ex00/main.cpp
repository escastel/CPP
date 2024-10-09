/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:24:48 by escastel          #+#    #+#             */
/*   Updated: 2024/10/09 18:24:01 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) 
{
	try 
	{
        Bureaucrat bureaucrat("Nacho", 2);
        std::cout << bureaucrat << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }

    try 
	{
        Bureaucrat bureaucrat1("Mondongo", 1);
		std::cout << bureaucrat1 << std::endl;
		std::cout << "Increment grade: ";
        bureaucrat1.incrementGrade();
        std::cout << bureaucrat1 << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
	
    try 
	{
        Bureaucrat bureaucrat2("Vohue", 150);
		std::cout << bureaucrat2 << std::endl;
		std::cout << "Decrement grade: ";
        bureaucrat2.decrementGrade();
        std::cout << bureaucrat2 << std::endl;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }

}