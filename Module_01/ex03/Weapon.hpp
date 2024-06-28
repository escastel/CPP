/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:52:33 by escastel          #+#    #+#             */
/*   Updated: 2024/06/28 15:03:41 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon{
	
	private:
			std::string	type;
	public:
			Weapon(std::string type);
			~Weapon();
			const std::string& getType(void);
			void setType(std::string new_type);
};

#endif