/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:46:17 by escastel          #+#    #+#             */
/*   Updated: 2024/11/20 15:29:50 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& copy) { (void)copy; }
ScalarConverter& ScalarConverter::operator = (const ScalarConverter& src) { (void)src; return *this; }
ScalarConverter::~ScalarConverter() {}

static	void	getScalarChar(std::string str);
static	void	getScalarInt(std::string str);
static	void	getScalarFloat(std::string str);
static	void	getScalarDouble(std::string str);
static	void	getScalarPLDF(std::string str){
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str.compare("+inff") == 0 || str.compare("+inf"))
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;	
	}
	else if (str.compare("-inff") == 0 || str.compare("-inf"))
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

static	int		getScalarType(std::string str)
{
	if (str.compare("nan") == 0 || str.compare("nanf") == 0 || str.compare("+inf") == 0 || str.compare("+inff") == 0 || str.compare("-inf") == 0 || str.compare("-inff") == 0)
		return PLDF;
	if (str.length() == 1 && !isdigit(str[0]))
		return CHAR;
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != 'F' && str[i] != '+' && str[i] != '-')
			return -1;
	}
	if (str.find('.') == std::string::npos)
		return INT;
	else{
		if (str.find('f') == str.length() - 1 || str.find('F') == str.length() - 1)
			return FLOAT;
		return DOUBLE;
	}
	return -1;
}
void	ScalarConverter::convert(std::string str)
{
	switch(getScalarType(str)){
		case CHAR:
			getScalarChar(str);
			break ;
		case INT:
			getScalarInt(str);
			break ;
		case FLOAT:
			getScalarFloat(str);
			break ;
		case DOUBLE:
			getScalarDouble(str);
			break ;
		case PLDF:
			getScalarPLDF(str);
			break ;
		default:
			std::cerr << "Error! Invalid argument" << std::endl;
			break;
	}
}