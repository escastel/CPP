/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:05:08 by escastel          #+#    #+#             */
/*   Updated: 2024/06/25 17:59:42 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"

class MateriaSource
{
	private:
			AMateria*	_copy[4];
	public:
			MateriaSource();
			MateriaSource(const MateriaSource& copy);
			MateriaSource& operator = (const MateriaSource& src);
			virtual ~MateriaSource();
			virtual void 		learnMateria(AMateria* learn) = 0;
			virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif