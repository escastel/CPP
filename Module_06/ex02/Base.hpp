/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:52:54 by escastel          #+#    #+#             */
/*   Updated: 2024/12/15 03:14:10 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <stdlib.h>

class Base
{
	public:
			virtual ~Base();
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);

#endif