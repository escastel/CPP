/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:46:17 by escastel          #+#    #+#             */
/*   Updated: 2024/12/15 01:38:06 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& copy) { (void)copy; }
ScalarConverter& ScalarConverter::operator = (const ScalarConverter& src) { (void)src; return *this; }
ScalarConverter::~ScalarConverter() {}

static int	getChar(std::string str){
	if (str[1] == '0')
		return (0);
	if (str[1] == 'a')
		return (7);
	if (str[1] == 'b')
		return (8);
	if (str[1] == 't')
		return (9);
	if (str[1] == 'n')
		return (10);
	if (str[1] == 'v')
		return (11);
	if (str[1] == 'f')
		return (12);
	if (str[1] == 'r')
		return (13);
	return (0);
}

static void	getScalarChar(std::string str){
	char c;
	
	if (str.length() == 1)
		c = str[0];
	else
		c = getChar(str);
	std::cout << "char: ";
	if (c < CHAR_MIN || c > CHAR_MAX || c < 0)
		std::cout << "impossible" << std::endl;
	else if (c < 32 || c > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
/*-----------------------------------------------------------------------*/
	std::cout << "int: ";
	std::cout << static_cast<int>(c) << std::endl;
/*-----------------------------------------------------------------------*/
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
/*-----------------------------------------------------------------------*/
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

static	void	getScalarInt(std::string str){
	long int i = atol(str.c_str());
	
	std::cout << "char: ";
	if (i < CHAR_MIN || i > CHAR_MAX || i < 0)
		std::cout << "impossible" << std::endl;
	else if (i < 32 || i > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "int: ";
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
/*-----------------------------------------------------------------------*/
	std::cout << "float: ";
	if (i < INT_MIN)
		std::cout << (INT_MIN) << ".0f" << std::endl;
	else if (i > INT_MAX)
		std::cout << (INT_MAX) << ".0f" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "double: ";
	if (i < INT_MIN)
		std::cout << (INT_MIN) << ".0" << std::endl;
	else if (i > INT_MAX)
		std::cout << (INT_MAX) << ".0" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

static	void	getScalarFloat(std::string str){
	double f = atof(str.c_str());

	std::cout << "char: ";
	if (f < CHAR_MIN || f > CHAR_MAX || f < 0)
		std::cout << "impossible" << std::endl;
	else if (f < 32 || f > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "int: ";
	if (f < INT_MIN|| f > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "float: ";
	if (isinf(static_cast<float>(f)) && f > 0)
		std::cout << "+inff" << std::endl;
	else if (isinf(static_cast<float>(f)) && f < 0)
		std::cout << "-inff" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "double: ";
	if (isinf(f) && f > 0)
		std::cout << "+inf" << std::endl;
	else if (isinf(f) && f < 0)
		std::cout << "-inf" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << f << std::endl;
}

static	void	getScalarDouble(std::string str){
	long double d = atof(str.c_str());

	std::cout << "char: ";
	if (d < CHAR_MIN || d > CHAR_MAX  || d < 0)
		std::cout << "impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "int: ";
	if (d < INT_MIN || d > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
/*-----------------------------------------------------------------------*/		
	std::cout << "float: ";
	if (isinf(static_cast<float>(d)) && d > 0)
		std::cout << "+inff" << std::endl;
	else if (isinf(static_cast<float>(d)) && d < 0)
		std::cout << "-inff" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
/*-----------------------------------------------------------------------*/		
	std::cout << "double: ";
 	if (isinf(static_cast<double>(d)) && d > 0)
		std::cout << "+inf" << std::endl;
	else if (isinf(static_cast<double>(d)) && d < 0)
		std::cout << "-inf" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
}

static	void	getScalarPLDF(std::string str){
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;	
	}
	else if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
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
	int countPnt = 0;
	int countPls = 0;
	int countRst = 0;
	
	if (str.compare("nan") == 0 || str.compare("nanf") == 0 || str.compare("+inf") == 0 || str.compare("+inff") == 0 || str.compare("-inf") == 0 || str.compare("-inff") == 0)
		return PLDF;
	if ((str.length() == 1 && !isdigit(str[0])) || (str.length() == 2 && str[0] == '\\' && (str[1] == '0' || str[1] == 'n' || str[1] == 't' || str[1] == 'v' || str[1] == 'b' || str[1] == 'r' || str[1] == 'f' || str[1] == 'a')))
		return CHAR;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			countPnt++;
		if (str[i] == '+')
			countPls++;
		if (str[i] == '-')
			countRst++;
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != 'F' && str[i] != '+' && str[i] != '-')
			return -1;

	}
	if (countPls > 1 || countRst > 1 || countPnt > 1)
		return -1;
	if ((countRst == 1 && str.find('-') != 0) || (countPls == 1 && str.find('+') != 0))
		return -1;
	if (countPnt == 0 && str.find('f') == std::string::npos && str.find('F') == std::string::npos)
		return INT;
	if (countPnt == 1){
		if ((str.find('f') == str.length() - 1 && str.find('F') == std::string::npos) || (str.find('F') == str.length() - 1 && str.find('f') == std::string::npos))
			return FLOAT;
		if (str.find('f') == std::string::npos && str.find('F') == std::string::npos)
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