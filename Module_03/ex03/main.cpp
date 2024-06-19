/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:02:41 by escastel          #+#    #+#             */
/*   Updated: 2024/06/19 19:10:51 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(){
	DiamondTrap juja("Juja");
	juja.attack("Coco");
	juja.takeDamage(6);
	juja.beRepaired(4);
	juja.takeDamage(20);
	juja.attack("Coco");
	juja.takeDamage(80);
	juja.beRepaired(20);
	juja.attack("Coco");
	juja.takeDamage(6);
	juja.whoAmI();
	return 0;
}