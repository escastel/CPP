/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:44:45 by escastel          #+#    #+#             */
/*   Updated: 2024/12/18 20:05:55 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char** argv){
	if (argc < 2){
		std::cout << "Error: invalid number of arguments" << std::endl;
		return (1);
	}
	RPN	operation(argv[1]);
	return (0);
}