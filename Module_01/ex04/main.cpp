/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:51:55 by escastel          #+#    #+#             */
/*   Updated: 2024/07/02 19:20:47 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc < 4 || argc > 4)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return 1;
	}
	int	i;
	std::string	str;
	std::string	s1(argv[2]);
	std::string s2(argv[3]);
	if (s2.empty() || s1.empty())
	{
		std::cout << "Error: String cant be empty" << std::endl;
		return 1;
	}
	std::ifstream infile;
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error: Error opening file" << std::endl;
		return 1;
	}
	std::ofstream outfile;
	outfile.open((std::string(argv[1]) += ".replace").c_str());
	if (outfile.fail())
	{
		std::cout << "Error: Error creating file" << std::endl;
		return 1;
	}
	while(infile.good())
	{
		if (!std::getline(infile, str))
		{
			std::cout << "Error: Problem with funtion getline" << std::endl;
			return ;
		}
		while ((i = str.find(s1)) != -1)
		{
			str.erase(i, s1.length());
			str.insert(i, s2);
		}
		outfile << str << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
