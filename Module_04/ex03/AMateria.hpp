/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:49:00 by escastel          #+#    #+#             */
/*   Updated: 2024/06/25 14:19:14 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "Character.hpp"

class AMateria
{
	protected:
			std::string	_type;
	public:
			AMateria();
			AMateria(std::string const& type);
			AMateria(const AMateria& copy);
			AMateria& operator = (const AMateria& src);
			~AMateria();
			std::string const&	getType() const;
			virtual AMateria*	clone() const = 0;
			virtual void		use(Character& target);
};

#endif