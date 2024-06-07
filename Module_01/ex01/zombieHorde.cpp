/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:24:49 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 17:54:19 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie*	arrayZ;
 	int		i;
	
	arrayZ = new Zombie[N];
 	for (i = 0; i < N; i++)
		arrayZ[i].setName(name);
	return (arrayZ);
}
