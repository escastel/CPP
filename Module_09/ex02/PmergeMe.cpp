/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:05:23 by escastel          #+#    #+#             */
/*   Updated: 2025/01/10 17:55:30 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(std::string arg[]){
	if (checkArg(arg))
		return ;
	saveData(arg);
	sortList();
	sortVector();
}

PmergeMe::PmergeMe(const PmergeMe& src){}
PmergeMe&	PmergeMe::operator = (const PmergeMe& copy){}
PmergeMe::~PmergeMe(){}

int	PmergeMe::checkArg(std::string arg[]){
	for (size_t i = 0; i < arg->size(); i++){
		for (size_t j = 0; j < arg[i].length(); j++){
			if (!isdigit(arg[i][j]) && arg[i][j] != ' '){
				if (arg[i][j] == '-' && isdigit(arg[i][j + 1]))
					std::cout << "Error: not positive integer detected." << std::endl;
				else
					std::cout << "Error: not digit argument detected." << std::endl;
				return (1);
			}	
		}
	}
	return (0);
}

void	PmergeMe::saveData(std::string arg[]){
	long int	nb;
	for (size_t i = 0; i < arg->size(); i++){
		nb = atol(arg[i].c_str());
		if (std::find(this->list.begin(), this->list.end(), nb) == this->list.end()){
			this->list.push_back(nb);
			this->vector.push_back(nb);
		}
	}
}

void	PmergeMe::sortList(std::list<long int>::iterator p_it, std::list<long int>::iterator r_it){}
void	PmergeMe::sortVector(std::vector<long int>::iterator p_it, std::vector<long int>::iterator r_it){}
void	PmergeMe::mergeList(std::list<long int>::iterator p_it, std::list<long int>::iterator r_it, std::list<long int>::iterator q_it){}
void	PmergeMe::mergeVector(std::vector<long int>::iterator p_it, std::vector<long int>::iterator r_it, std::vector<long int>::iterator q_it){}
void	PmergeMe::insertionList(std::list<long int>::iterator p_it, std::list<long int>::iterator r_it){}
void	PmergeMe::insertionVector(std::vector<long int>::iterator p_it, std::vector<long int>::iterator r_it){}