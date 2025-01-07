/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:34:08 by escastel          #+#    #+#             */
/*   Updated: 2025/01/07 16:22:27 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char** argv){
	if (argc != 2){
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	BitcoinExchange	bitcoin(argv[1]);
}