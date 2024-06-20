/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:07:09 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 19:16:41 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
			Brain*	_brainDog;
	public:
			Dog();
			Dog(const Dog& copy);
			Dog& operator = (const Dog& src);
			~Dog();
			virtual Brain	*getBrain(void)const;
			virtual void	makeSound(void)const;
};

#endif