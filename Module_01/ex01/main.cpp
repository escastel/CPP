/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:11:12 by escastel          #+#    #+#             */
/*   Updated: 2024/06/11 12:52:00 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie*	horde;

	horde = zombieHorde(6, "Brayan");
	for (int i = 0; i < 6; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
