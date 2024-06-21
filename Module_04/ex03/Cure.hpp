/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:14:33 by escastel          #+#    #+#             */
/*   Updated: 2024/06/21 13:23:52 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "MateriaSource.hpp"

class Cure : public AMateria
{
	public:
			Cure();
			Cure(const Cure& copy);
			Cure& operator = (const Cure& src);
			~Cure();
			virtual AMateria*	clone() const;
			virtual void		use(Character& target);
};

#endif