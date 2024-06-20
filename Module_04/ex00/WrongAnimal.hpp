/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:12:07 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 18:12:24 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
			std::string	_type;
	public:
			WrongAnimal();
			WrongAnimal(const WrongAnimal& copy);
			WrongAnimal& operator = (const WrongAnimal& src);
			virtual ~WrongAnimal();
			void		makeSound(void)const;
			std::string	getType(void)const;
};

#endif