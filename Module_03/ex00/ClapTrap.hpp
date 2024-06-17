/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:03:08 by escastel          #+#    #+#             */
/*   Updated: 2024/06/14 12:40:37 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
	private:
			std::string		_name;
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;
	public:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& copy);
			ClapTrap& operator = (const ClapTrap& src);
			~ClapTrap();
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			void attack(const std::string& target);
};


#endif