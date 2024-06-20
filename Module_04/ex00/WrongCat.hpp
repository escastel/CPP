/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:14:07 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 18:12:20 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP 
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
			WrongCat();
			WrongCat(const WrongCat& copy);
			WrongCat& operator = (const WrongCat& src);
			virtual ~WrongCat();
			void	makeSound(void)const;
};

#endif