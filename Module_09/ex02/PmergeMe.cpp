/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:05:23 by escastel          #+#    #+#             */
/*   Updated: 2025/01/13 13:54:14 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(char **arg){
	if (checkArg(arg))
		return ;
	saveData(arg);
	takeTime();
}

PmergeMe::PmergeMe(const PmergeMe& src){
	this->vector = src.vector;
	this->list = src.list;
}

PmergeMe&	PmergeMe::operator = (const PmergeMe& copy){
	if (this != &copy){
		this->vector = copy.vector;
		this->list = copy.list;
	}
	return (*this);
}

PmergeMe::~PmergeMe(){}

int	PmergeMe::checkArg(char **arg){
	for (size_t i = 0; arg[i] ; i++){
		for (size_t j = 0; arg[i][j]; j++){
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

void	PmergeMe::saveData(char **arg){
	long int	nb;
	
	for (size_t i = 0; arg[i] != NULL; i++){
		nb = atol(arg[i]);
		if (std::find(this->list.begin(), this->list.end(), nb) == this->list.end()){
			this->list.push_back(nb);
			this->vector.push_back(nb);
		}
	}
}

void	PmergeMe::printList(){
	std::list<long int>::const_iterator	it;
	for (it = this->list.begin(); it != this->list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::takeTime(){
	struct timeval	start;
	struct timeval	end;
	long int		vector;
	long int		list;
	
	std::cout << "Before: ";
	printList();
	gettimeofday(&start, NULL);
	sortVector(this->vector.begin(), this->vector.end());
	gettimeofday(&end, NULL);
	vector = end.tv_usec- start.tv_usec;
	gettimeofday(&start, NULL);
	sortList(this->list.begin(), this->list.end());
	gettimeofday(&end, NULL);
	list = end.tv_usec - start.tv_usec;
	
	std::cout << "After: ";
	printList();
	std::cout << "Time to process a range of " << this->vector.size() << " elements with std::vector<long int> : " << vector << " us" << std::endl;
	std::cout << "Time to process a range of " << this->list.size() << " elements with std::list<long int> : " << list << " us" << std::endl;
}

void	PmergeMe::sortList(std::list<long int>::iterator p_it, std::list<long int>::iterator r_it){
	if (std::distance(p_it, r_it) > 1){
		std::list<long int>::iterator	q_it = p_it;
		std::advance(q_it, std::distance(p_it, r_it) / 2);
		sortList(p_it, q_it);
		sortList(q_it, r_it);
		mergeList(p_it, r_it, q_it);
	}
}

void	PmergeMe::sortVector(std::vector<long int>::iterator p_it, std::vector<long int>::iterator r_it){
	if (std::distance(p_it, r_it) > 1){
		std::vector<long int>::iterator	q_it = p_it;
		std::advance(q_it, std::distance(p_it, r_it) / 2);
		sortVector(p_it, q_it);
		sortVector(q_it, r_it);
		mergeVector(p_it, r_it, q_it);
	}
}

void	PmergeMe::mergeList(std::list<long int>::iterator p_it, std::list<long int>::iterator r_it, std::list<long int>::iterator q_it){
	std::list<long int>	first_half(p_it, q_it);
	std::list<long int>	last_half(q_it, r_it);
	std::list<long int>::iterator	it;
	std::list<long int>::iterator	f_it = first_half.begin();
	std::list<long int>::iterator	l_it = last_half.begin();

	for (it = p_it; f_it != first_half.end() && l_it != last_half.end(); it++){
		if (*f_it < *l_it){
			*it = *f_it;
			f_it++;
		}
		else{
			*it = *l_it;
			l_it++;
		}
	}
	for (;f_it != first_half.end(); it++, f_it++) *it = *f_it;
	for (;l_it != last_half.end(); it++, l_it++) *it = *l_it;
}

void	PmergeMe::mergeVector(std::vector<long int>::iterator p_it, std::vector<long int>::iterator r_it, std::vector<long int>::iterator q_it){
	std::vector<long int>	first_half(p_it, q_it);
	std::vector<long int>	last_half(q_it, r_it);
	std::vector<long int>::iterator	it;
	std::vector<long int>::iterator	f_it = first_half.begin();
	std::vector<long int>::iterator	l_it = last_half.begin();

	for (it = p_it; f_it != first_half.end() && l_it != last_half.end(); it++){
		if (*f_it < *l_it){
			*it = *f_it;
			f_it++;
		}
		else{
			*it = *l_it;
			l_it++;
		}
	}
	for (;f_it != first_half.end(); it++, f_it++) *it = *f_it;
	for (;l_it != last_half.end(); it++, l_it++) *it = *l_it;
}