/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:53:25 by escastel          #+#    #+#             */
/*   Updated: 2024/06/10 16:06:34 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
	
	private:
			Weapon		*wpn;
			std::string	name;
	public:
			HumanB(std::string	name);
			~HumanB();
			void attack(void);
			void setWeapon(Weapon &wpn);
};

#endif