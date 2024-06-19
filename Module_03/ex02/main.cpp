/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:02:41 by escastel          #+#    #+#             */
/*   Updated: 2024/06/19 17:59:53 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(){
	FragTrap frong("Frog");
	frong.attack("Coco");
	frong.takeDamage(6);
	frong.beRepaired(4);
	frong.takeDamage(20);
	frong.highFivesGuys();
	frong.attack("Coco");
	frong.takeDamage(80);
	frong.beRepaired(20);
	frong.attack("Coco");
	frong.takeDamage(6);
	return 0;
}