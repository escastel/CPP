/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:54:22 by escastel          #+#    #+#             */
/*   Updated: 2024/06/21 13:12:24 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPPP
# define CHARACTER_HPP
# include "AMateria.hpp"

class Character
{
	private:
			std::string	_name;
			AMateria*	_inventory[4];
	public:
			Character();
			Character(std::string name);
			Character(const Character& copy);
			Character operator = (const Character& src);
			virtual	~Character();
			virtual std::string const&	getName() const = 0;
			virtual void				equip(AMateria* m) = 0;
			virtual void				unequip(int idx) = 0;
			virtual void				use(int idx, Character& target) = 0;
};

#endif