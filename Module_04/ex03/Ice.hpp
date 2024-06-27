/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:11:34 by escastel          #+#    #+#             */
/*   Updated: 2024/06/27 17:20:59 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
			Ice();
			Ice(const Ice& copy);
			Ice& operator = (const Ice& src);
			~Ice();
			AMateria*	clone() const;
			void		use(ICharacter& target);
};

#endif