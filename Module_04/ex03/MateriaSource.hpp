/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:05:08 by escastel          #+#    #+#             */
/*   Updated: 2024/06/27 17:17:53 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
			AMateria*	_copy[4];
	public:
			MateriaSource();
			MateriaSource(const MateriaSource& copy);
			MateriaSource& operator = (const MateriaSource& src);
			~MateriaSource();
			void 		learnMateria(AMateria* learn);
			AMateria*	createMateria(std::string const & type);
};

#endif