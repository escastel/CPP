/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:11:12 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 16:48:22 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie z("Brayan");
	z.announce();

	Zombie*	newZ = newZombie("Zara");
	newZ->announce();

	randomChump("Jony");
	
	delete newZ;
}
