/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:34:28 by escastel          #+#    #+#             */
/*   Updated: 2025/01/10 12:57:23 by escastel         ###   ########.fr       */
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
		value = atof(date.substr(date.find(',') + 1, date.length()).c_str());
		date = date.substr(0, date.find(','));
		this->data.insert(std::pair<std::string, float>(date, value));
	}
	dataFile.close();
}

void	BitcoinExchange::printResult(std::string str){
	std::map<std::string, float>::iterator it = this->data.begin();
	std::string								date = str.substr(0, str.find('|') - 1);
	float 									coins = atof(str.substr(str.find('|') + 1, str.length()).c_str());
	
	if (date < it->first)
		std::cout << "Error: data not found." << std::endl;
	else {
		it = this->data.lower_bound(date);
		if (it->first != date)
			it--;
		std::cout << date << " => " << coins << " = " << coins * it->second << std::endl; 	
	}
}

static int	checkCoins(std::string coins){
	int check = 0;
	
	if (atof(coins.c_str()) > 1000) check = 3;
	for (size_t i = 0; i < coins.length(); i++){
		if ((!isdigit(coins[i]) && coins[i] != '.') || (coins.find_first_of('.') != coins.find_last_of('.')) || (coins[i] == '.' && i == 0)){
			if (coins[i] == '-' && coins.find_last_of('-') == i  && i == 0){ check = 2; }
			else { check = 1; }
			break ;
		}
	}
	return (check);
}

static int	checkDate(std::string date){
	if (date.length() != 11) return (1);
	for (size_t i = 0; i < date.length(); i++){
		if (i != 4 && i != 7 && i != 10){ if (!isdigit(date[i])) return (1); }
		else if (i == 10) { if (date[i] != ' ') return (1); }
		else { if (date[i] != '-') return (1); }
	}
	int	arrayDays[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int	days = atoi(date.substr(8, 10).c_str());
	int	month = atoi(date.substr(5, 7).c_str());
	int	year = atoi(date.substr(0, 4).c_str());
	if (year == 0 || month > 12 || month <= 0) return (1);
	if (arrayDays[month - 1] < days || days == 0) return (1);
	if (month == 2 && days == 29 && (year % 4 != 0)) return (1);
	return (0);
}

static int	checkInput(std::string str, int i){
	int	check = 0;
	
	if (str.empty() || str[0] == '\n') { return (4); }
	if (str == "date | value" && i == 0){ return (4); }
	if (str.find('|') == str.npos || str.find('-') == str.npos){ return (1); }
	std::string	date = str.substr(0, str.find('|'));
	check = checkDate(date);
	if (check){ return (check); }
	std::string coins = str.substr(str.find('|') + 2, str.length());
	if (coins.empty()) { return (1); }
	check = checkCoins(coins);
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
	while (file.good()){
		if (!std::getline(file, str)){
			std::cout << "Error: empty line or file." << std::endl;
			return ;
		}
		switch(checkInput(str, i)){
			case 1:
				std::cout << "Error: bad input => " << str << std::endl;
				break;
			case 2:
				std::cout << "Error: not a positive number." << std::endl;
				break;
			case 3:
				std::cout << "Error: too large a number." << std::endl;
				break;
			case 4:
				break ;
			default:
				printResult(str);
				break ;
		}
		i++;
	}
}