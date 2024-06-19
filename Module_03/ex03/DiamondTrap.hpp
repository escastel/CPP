/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:03:06 by escastel          #+#    #+#             */
/*   Updated: 2024/06/19 19:08:53 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
			std::string	_name;
	public:
			DiamondTrap();
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap& copy);
			DiamondTrap operator = (const DiamondTrap& src);
			~DiamondTrap();
			void	whoAmI();
			void	attack(const std::string& target);
};

#endif