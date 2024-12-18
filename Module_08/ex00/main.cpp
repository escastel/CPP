/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:45:35 by escastel          #+#    #+#             */
/*   Updated: 2024/12/18 14:12:56 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	int const			arrayValues[] = {24, 42, 76, 67, 90};
	size_t const		arraySize(sizeof(arrayValues) / sizeof(int));
	std::vector<int>	num(arrayValues, arrayValues + arraySize);
	
	try {
		std::vector<int>::iterator it = easyfind(num, 24);
		std::cout << *it << std::endl;	
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}