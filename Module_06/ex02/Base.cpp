/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:58:17 by escastel          #+#    #+#             */
/*   Updated: 2024/12/16 18:51:37 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base	*generate()
{
	std::srand(time(0));
	int		random = (std::rand() % 3);

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

void	identify(Base &p){
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Reference A" << std::endl;
	} catch (std::exception &e) {
		try {
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "Reference B" << std::endl;
		} catch (std::exception &e) {
			try {
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "Reference C" << std::endl;
			} catch (std::exception &e) {
				std::cout << "Unverifiable" << std::endl;
			}
		}
	}
}