/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:54:22 by escastel          #+#    #+#             */
/*   Updated: 2024/06/27 17:47:53 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "Cure.hpp"
# include "Ice.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
			std::string	_name;
			AMateria*	_slot[4];
			AMateria*	_rest[500];
	public:
			Character();
			Character(std::string name);
			Character(const Character& copy);
			Character& operator = (const Character& src);
			~Character();
			std::string const&	getName() const;
			void				equip(AMateria* m);
			void				unequip(int idx);
			void				use(int idx, ICharacter& target);
};

#endif