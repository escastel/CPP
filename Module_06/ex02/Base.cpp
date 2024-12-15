/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:58:17 by escastel          #+#    #+#             */
/*   Updated: 2024/12/15 03:16:24 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base	*generate()
{
	std::srand(time(NULL));
	int		random = (std::rand() % 3);

	std::cout << random << std::endl;
	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Pointer B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Pointer C" << std::endl;
}

void	identify(Base &p){ identify(&p); }