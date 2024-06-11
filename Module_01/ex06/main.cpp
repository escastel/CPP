/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:04:49 by escastel          #+#    #+#             */
/*   Updated: 2024/06/10 18:28:28 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){

	if (argc < 2 || argc > 2)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return 1;
	}
	Harl	harl;
	harl.complain(argv[1]);
	return 0;
}