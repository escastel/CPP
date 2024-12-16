/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:16:03 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 20:36:01 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	{
		std::cout << "ARRAY TYPE INT:\n";
		int array[5] = {1, 2, 3, 4, 5};
		int size = 5;
		iter(array, size, printValue);	
	}
	std::cout <<"\n\n------------------------\n\n" << std::endl;
	{
		std::cout << "\nARRAY TYPE STRING:\n";
		std::string array[5] = {"holi", "como", "estas", "?", ":)"};
		int size = 5;
		iter(array, size, printValue);	
	}
	return 0;
}