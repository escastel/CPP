/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:11:12 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 18:17:36 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie*	horde;
	int		N;
	int		i;

	N = 6;
	horde = zombieHorde(N, "Brayan");
	for (i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}
