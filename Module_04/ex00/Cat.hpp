/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:08:53 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 14:59:36 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
			Cat();
			Cat(const Cat& copy);
			Cat& operator = (const Cat& src);
			~Cat();
			virtual void	makeSound(void)const;
};

#endif