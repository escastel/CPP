/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:45:00 by escastel          #+#    #+#             */
/*   Updated: 2024/12/19 19:59:50 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(std::string arg){
	if (checkArg(arg))
		return ;
	calculator(arg);
}

RPN::RPN(const RPN	&src){ this->num = src.num; }

RPN&	RPN::operator = (const RPN &src){
	if (this != &src)
		this->num = src.num;
	return (*this);
}

RPN::~RPN(){}

void	RPN::operation(char c){
	long int x, y;

	try {
		y = this->num.top();
		this->num.pop();
		x = this->num.top();
		this->num.pop();
		if (c == '+')
			this->num.push(x + y);
		else if (c == '-')
			this->num.push(x - y);
		else if (c == '*')
			this->num.push(x * y);
		else{
			if (y == 0)
				throw std::exception();
			else
				this->num.push(x / y);
		}	
	} catch(std::exception &e){
		std::cout << "Error! You can't divide by 0." << std::endl;
	}
}

void	RPN::calculator(std::string arg){
	size_t	i = 0;
	
	try {
		while(i < arg.length()){
			while (arg[i] == ' ')
				i++;
			if (isdigit(arg[i]))
				this->num.push(atol(&arg[i]));
			if (!isdigit(arg[i])){
				if (this->num.size() >= 2){
					operation(arg[i]);
					if (this->num.empty())
						return ;	
				}
				else
					throw std::exception();
			}
			i++;
		}
		std::cout << this->num.top() << std::endl;
	} catch(std::exception &e){
		std::cout << "Error! Not enought numbers." << std::endl;
	}
}

int	RPN::checkArg(std::string arg){
	try{
		for (size_t i = 0; i < arg.length(); i++)
			if (!isdigit(arg[i]) && arg[i] != '*' && arg[i] != '/' && arg[i] != '+' && arg[i] != '-' && arg[i] != ' ')
				throw std::exception();
	} catch(std::exception &e){
		std::cout << "Error! Invalid token or character." << std::endl;
		return (1);
	}
	try {
		for (size_t i = 0; i < arg.length(); i++){
			if (isdigit(arg[i]) && isdigit(arg[i + 1]))
				throw std::exception();
		}
	} catch(std::exception &e){
		std::cout << "Error! Numbers need to be less than 10." << std::endl;
		return (1);
	}
	try {
		int	countTokens = 0, countNumbers = 0;
		for (size_t i = 0; i < arg.length(); i++){
			if (isdigit(arg[i]))
				countNumbers++;
			if (!isdigit(arg[i]) && arg[i] != ' ')
				countTokens++;
		}
		if ((countNumbers + countTokens) % 2 == 0)
			throw std::exception();
		if ((countNumbers - 1) != countTokens || (countTokens == 0 || countNumbers == 0))
			throw std::exception();
	} catch(std::exception &e){
		std::cout << "Error! Wrong number of tokens or numbers." << std::endl;
		return (1);
	}
	try {
		if (!isdigit(arg[0]) || isdigit(arg[arg.length() - 1]))
			throw std::exception();
		for (size_t i = 0; i < arg.length() - 1; i++){
			if (arg[i] != ' ' && (arg[i + 1] != ' '))
				throw std::exception();
			if (arg[i] == ' ' && arg[i + 1] == ' ')
				throw std::exception();
		}
	} catch (std::exception &e){
		std::cout << "Error! Wrong expression." << std::endl;
		return (1);
	}
	return (0);
}