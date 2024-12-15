/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 03:03:16 by escastel          #+#    #+#             */
/*   Updated: 2024/12/15 03:20:50 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base	*base = generate();
	
	std::cout << "Identify with Pointers" << std::endl;
	identify(base);
	std::cout << "Identify with References" << std::endl;
	identify(*base);

	delete base;
	return 0;
}