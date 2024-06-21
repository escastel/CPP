/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:11:34 by escastel          #+#    #+#             */
/*   Updated: 2024/06/21 13:24:05 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "MateriaSource.hpp"

class Ice : public AMateria
{
	public:
			Ice();
			Ice(const Ice& copy);
			Ice operator = (const Ice& src);
			~Ice();
			virtual AMateria*	clone() const;
			virtual void		use(Character& target);
};

#endif