/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:34:28 by escastel          #+#    #+#             */
/*   Updated: 2025/01/07 18:51:45 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string input){
	saveData();
	manageInput(input);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src){ this->data = src.data; }

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange &src){
	if (this != &src){
		this->data = src.data;
	}
	return (*this);
}
BitcoinExchange::~BitcoinExchange(){}

void	BitcoinExchange::saveData(){
	std::ifstream	dataFile("data.csv");
	std::string		date;
	float			value;
	
	if (!dataFile.is_open()){
		std::cout << "Error: could not open data.csv file." <<  std::endl;
		return ;
	}
	while (dataFile.good()){
		if (!std::getline(dataFile, date)){
			std::cout << "Error: problem with funtion getline" << std::endl;
			return ;
		}
		value = atof(date.substr(date.find(','), date.length()).c_str());
		date = date.substr(0, date.find(','));
		this->data.insert(std::pair<std::string, float>(date, value));
	}
	dataFile.close();
}

static bool	checkDate(std::string date){
	int y;
	int	m;
	int	d;
}

static bool	checkInput(std::string str, int i){
	bool	check = true;
	
	if ((str == "date | value" && i != 0) || str.find('|') == str.npos || str.find('-') == str.npos){
		std::cout << "Error: bad input => " << str << std::endl;
		check = false;
		return (check);
	}
	if (str == "date | value"){
		check = false;
		return (check);
	}
	std::string	date = str.substr(0, str.find('|'));
	if (!checkDate(date)){
		std::cout << "Error: bad input => " << str << std::endl;
		check = false;
		return (check);
	}
	std::string coins = str.substr(str.find('|') + 1, str.length());
	for (int j = 0; j < coins.length(); j++){
		if (!isdigit(str[j]) && str[j] != '.' || (str.find_first_of('.') != str.find_last_of('.'))){
			if (str[j] == '-')
				std::cout << "Error: not a positive number." << std::endl;
			else
				std::cout << "Error: bad input => " << str << std::endl;
			check = false;
			break ;
		}
	}
	return (check);
}

void	BitcoinExchange::manageInput(std::string input){
	std::ifstream	file(input.c_str());
	std::string		str;
	int				i = 0;
	
	if (!file.is_open()){
		std::cout << "Error: could not open input file." <<  std::endl;
		return ;
	}
	while (file.is_open()){
		if (!std::getline(file, str)){
			std::cout << "Error: problem with funtion getline." << std::endl;
			return ;
		}
		i++;
	}
}