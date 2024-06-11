/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:11:12 by escastel          #+#    #+#             */
/*   Updated: 2024/06/10 16:36:12 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void){
	std::string		stringSRC = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringSRC;
	std::string&	stringREF = stringSRC;

	std::cout << "\nMemory address\nstringSRC: " << &stringSRC << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << "\n" << std::endl;

	std::cout << "Value\nstringSRC: " << stringSRC << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << "\n" << std::endl;
	return 0;
}
