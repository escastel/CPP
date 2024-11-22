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
 	ScalarConverter::convert(argv[1]);
	return 0;
}