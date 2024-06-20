/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:08:53 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 19:16:48 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
			Brain*	_brainCat;
	public:
			Cat();
			Cat(const Cat& copy);
			Cat& operator = (const Cat& src);
			~Cat();
			virtual Brain*	getBrain(void)const;
			virtual void	makeSound(void)const;
};

#endif