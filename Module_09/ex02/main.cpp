/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:02:08 by escastel          #+#    #+#             */
/*   Updated: 2025/01/13 13:10:48 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv){
	if (argc < 2){
		std::cout << "Errror: incorrect number of arguments." << std::endl;
		return (1);
	}
	argv += 1;
	PmergeMe	test(argv);
}