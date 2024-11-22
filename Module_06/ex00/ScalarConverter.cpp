/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:46:17 by escastel          #+#    #+#             */
/*   Updated: 2024/11/22 18:14:51 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& copy) { (void)copy; }
ScalarConverter& ScalarConverter::operator = (const ScalarConverter& src) { (void)src; return *this; }
ScalarConverter::~ScalarConverter() {}

static	void	getScalarChar(std::string str){
	char c = str[0];
	
	std::cout << "char: ";
	std::cout << "'" << c << "'" << std::endl;
/*-----------------------------------------------------------------------*/
	std::cout << "int: ";
	std::cout << static_cast<int>(c) << std::endl;
/*-----------------------------------------------------------------------*/
	std::cout << "float: ";
	std::cout << static_cast<float>(c) << ".0f" << std::endl;
/*-----------------------------------------------------------------------*/
	std::cout << "double: ";
	std::cout << static_cast<double>(c) << ".0" << std::endl;
}

static	void	getScalarInt(std::string str){
	long int i = atol(str.c_str());
	
	std::cout << "char: ";
	if (i < CHAR_MIN || i > CHAR_MAX)
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
		std::cout << static_cast<float>(INT_MIN) << ".0f" << std::endl;
	else if (i > INT_MAX)
		std::cout << static_cast<float>(INT_MAX) << ".0f" << std::endl;
	else
		std::cout << i << ".0f" << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "double: ";
	if (i < INT_MIN)
		std::cout << static_cast<double>(INT_MIN) << ".0" << std::endl;
	else if (i > INT_MAX)
		std::cout << static_cast<double>(INT_MAX) << ".0" << std::endl;
	else
		std::cout << i << ".0" << std::endl;
}

static	void	getScalarFloat(std::string str){
	double f = atof(str.c_str());

	std::cout << "char: ";
	if (f < CHAR_MIN || f > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (f < 32 || f > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "int: ";
	if (f < static_cast<double>(INT_MIN)|| f > static_cast<double>(INT_MAX))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "float: ";
	if (isinf(static_cast<float>(f)) && f > 0)
		std::cout << "+inf" << std::endl;
	else if (isinf(static_cast<float>(f)) && f < 0)
		std::cout << "-inf" << std::endl;
	else if (f == roundf(f) || (f - 0.99999f) == roundf(f))
		std::cout << static_cast<float>(f) << ".0f" << std::endl;
	else
		std::cout << static_cast<float>(f) << "f" << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "double: ";
	if (isinf(f) && f > 0)
		std::cout << "+inf" << std::endl;
	else if (isinf(f) && f < 0)
		std::cout << "-inf" << std::endl;
	else if (f == roundf(f) || (f - 0.99999f) == roundf(f))
		std::cout << f << ".0" << std::endl;
	else
		std::cout << f << std::endl;
}

static	void	getScalarDouble(std::string str){
	long double d = atof(str.c_str());

	std::cout << "char: ";
	if (d < CHAR_MIN || d > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
/*-----------------------------------------------------------------------*/	
	std::cout << "int: ";
	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
/*-----------------------------------------------------------------------*/		
	std::cout << "float: ";
	if (d < -3.4e38 || d > 3.4e38)
		std::cout << "impossible" << std::endl;
	else if (d == round(d) || (d - 0.99999) == round(d))
		std::cout << static_cast<float>(d) << ".0f" << std::endl;	
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
/*-----------------------------------------------------------------------*/		
	std::cout << "double: ";
 	if (d > 1.7e308)
		std::cout << "+inf" << std::endl;
	else if (d < -1.7e308)
		std::cout << "-inf" << std::endl;
	else if (d == round(d) || (d - 0.99999) == round(d))
		std::cout << static_cast<double>(d) << ".0" << std::endl;
	else
		std::cout << static_cast<double>(d) << std::endl;
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
	if (str.compare("nan") == 0 || str.compare("nanf") == 0 || str.compare("+inf") == 0 || str.compare("+inff") == 0 || str.compare("-inf") == 0 || str.compare("-inff") == 0)
		return PLDF;
	if (str.length() == 1 && !isdigit(str[0]))
		return CHAR;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'e' && str[i] != 'E' && str[i] != 'f' && str[i] != 'F' && str[i] != '+' && str[i] != '-')
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