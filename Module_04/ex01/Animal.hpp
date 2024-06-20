/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:05:15 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 15:18:26 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	protected:
			std::string	_type;
	public:
			Animal();
			Animal(const Animal& copy);
			Animal&	operator = (const Animal& src);
			virtual ~Animal();
			std::string		getType(void)const;
			virtual	void	makeSound(void)const;
};

#endif