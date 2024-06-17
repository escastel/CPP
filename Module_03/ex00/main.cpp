/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:02:41 by escastel          #+#    #+#             */
/*   Updated: 2024/06/14 12:40:31 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap coco("Coco");
	coco.takeDamage(5);
	coco.attack("Momo");
	coco.takeDamage(2);
	coco.beRepaired(2);
	coco.takeDamage(5);
	coco.attack("Momo");
	return 0;
}