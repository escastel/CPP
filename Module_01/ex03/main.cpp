/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:51:55 by escastel          #+#    #+#             */
/*   Updated: 2024/06/11 13:27:57 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("Navaja");
		HumanA brayan("Brayan", club);
		brayan.attack();
		club.setType("Katana");
		brayan.attack();
	}
	{
		Weapon club = Weapon("Navaja");
		HumanB jony("Jony");
		jony.setWeapon(club);
		jony.attack();
		club.setType("Katana");
		jony.attack();
	}
	return 0;
}
