/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:14:33 by escastel          #+#    #+#             */
/*   Updated: 2024/06/27 17:45:55 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
			Cure();
			Cure(const Cure& copy);
			Cure& operator = (const Cure& src);
			~Cure();
			AMateria*	clone() const;
			void		use(ICharacter& target);
};

#endif