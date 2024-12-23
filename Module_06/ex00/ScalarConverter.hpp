/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:46:08 by escastel          #+#    #+#             */
/*   Updated: 2024/12/15 01:24:50 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string.h>
# include <cstring>
# include <climits>
# include <cstdlib>
# include <limits>
# include <math.h>
# include <iomanip> 

enum	scalarTypes
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PLDF,
};

class ScalarConverter
{
	private:
			ScalarConverter();
			ScalarConverter(const ScalarConverter& copy);
			ScalarConverter& operator = (const ScalarConverter& src);
	public:
			~ScalarConverter();	
			static void	convert(std::string str);
};

#endif