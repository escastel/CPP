/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:24:49 by escastel          #+#    #+#             */
/*   Updated: 2024/06/11 13:21:11 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie*	arrayZ;
	
	arrayZ = new Zombie[N];
 	for (int i = 0; i < N; i++)
		arrayZ[i].setName(name);
	return (arrayZ);
}
