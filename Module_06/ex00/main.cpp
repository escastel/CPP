#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>

int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		std::cerr << "Error! No arguments" << std::endl;
		return 1;
	}
/* 	ScalarConverter::convert(argv[1]); */
    double inf = std::numeric_limits<double>::infinity() * -1;
	double min = std::numeric_limits<double>::min();
	char c = std::numeric_limits<char>::max();
	char a = std::numeric_limits<char>::min();
	std::cout << "max: " << (int)c << std::endl;
	std::cout << "min: " << (unsigned int)a << std::endl;
	std::cout << "min: " << min << std::endl;
	std::cout << "inf: " << inf << std::endl;
	return 0;
}