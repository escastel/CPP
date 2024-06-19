/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:02:41 by escastel          #+#    #+#             */
/*   Updated: 2024/06/19 15:30:16 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(){
	FragTrap momo("Momo");
	momo.attack("Coco");
	momo.takeDamage(6);
	momo.beRepaired(4);
	momo.takeDamage(20);
	momo.attack("Coco");
	momo.takeDamage(80);
	momo.beRepaired(20);
	momo.attack("Coco");
	momo.takeDamage(6);
	return 0;
}