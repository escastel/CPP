/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:11:32 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 16:40:58 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie{
	
	private:
			std::string	name;
	public:
			Zombie(std::string name);
			~Zombie();
			void	announce(void);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif