/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:52:51 by escastel          #+#    #+#             */
/*   Updated: 2024/06/10 16:07:26 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{
	
	private:
			Weapon		*wpn;
			std::string	name;
	public:
			HumanA(std::string name, Weapon &wpn);
			~HumanA();
			void attack(void);
};

#endif