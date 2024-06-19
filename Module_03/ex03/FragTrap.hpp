/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:38:44 by escastel          #+#    #+#             */
/*   Updated: 2024/06/19 18:56:18 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap& copy);
			FragTrap& operator = (const FragTrap& src);
			~FragTrap();
			void	highFivesGuys(void);
};

#endif