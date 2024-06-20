/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:04:29 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 19:17:17 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
/* 	const Animal* meta = new Animal(); */
	const Animal* j = new Dog();
	const Animal* i = new Cat();
 	const WrongAnimal* wrg = new WrongAnimal();
	const WrongAnimal*	l = new WrongCat();

	std::cout << "Animal:" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	/* std::cout << meta->getType() << " " << std::endl; */
	i->makeSound();
	j->makeSound();
	/* meta->makeSound(); */
 	std::cout << "\nWrongAnimal:" << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << wrg->getType() << " " << std::endl;
	l->makeSound();
	wrg->makeSound();
	/* delete meta; */
	delete i;
	delete j;
	delete l;
	delete wrg;
	return 0;
}