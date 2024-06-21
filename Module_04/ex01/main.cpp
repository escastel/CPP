/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:04:29 by escastel          #+#    #+#             */
/*   Updated: 2024/06/21 13:01:16 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* animals[4] = {new Cat(), new Cat(), new Dog(), new Dog()};
	
	animals[0]->getBrain()->setIdea("Meowmeowmeowmeow");
	std::cout << animals[0]->getBrain()->getIdea(0) << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return 0;
}