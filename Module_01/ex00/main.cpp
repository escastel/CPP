/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:11:12 by escastel          #+#    #+#             */
/*   Updated: 2024/06/10 16:35:51 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie z("Brayan");
	Zombie*	newZ;

	z.announce();
	newZ = newZombie("Zara");
	newZ->announce();
	randomChump("Jony");
	delete newZ;
	return 0;
}
