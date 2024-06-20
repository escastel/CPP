/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:04:29 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 19:07:47 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

/* int	main()
{
	const Cat *lol = new Cat();
	Brain* hola = lol->getBrain();
	hola->setIdea("meow");
	std::cout << hola->getIdea(0) << std::endl;
	delete lol;
} */
int main()
{
	const Animal* animals[4] = {new Cat(), new Cat(), new Dog(), new Dog()};
	
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return 0;
}