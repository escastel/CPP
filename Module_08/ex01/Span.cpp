/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:21:12 by escastel          #+#    #+#             */
/*   Updated: 2024/12/18 16:34:33 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {}

Span::Span(unsigned int n){
	this->n = n;
}

Span::Span(Span const &src) {
	if (this != &src)
		*this = src;
}

Span::~Span(void) {}

Span	&Span::operator=(Span const &src) {
	if (this == &src){
		this->n = src.n;
		this->vector = src.vector;	
	}
	return *this;
};

const char*	NotFound::what() const throw()
{
	return "No span can be found";
};

void	Span::addNumber(int n) {
	try {
			if (this->vector.size() < this->n)
				this->vector.push_back(n);
			else
				throw std::exception();
	}
	catch (std::exception &e) {
		std::cout << "Vector is full" << std::endl;
	}
};

void	Span::addNumber(int *array, size_t size) {
	try {
			if (this->vector.size() < this->n){
				for (size_t i = 0; i < size; i++)
					this->vector.push_back(array[i]);	
			}
			else
				throw std::exception();
	}
	catch (std::exception &e) {
		std::cout << "Vector is full" << std::endl;
	}
};
int		Span::shortestSpan(){
	if (this->vector.size() < 2)
		throw NotFound();
	std::sort(this->vector.begin(), this->vector.end());
	int shortest = this->vector[1] - this->vector[0];
	for (size_t i = 1; i < this->vector.size() - 1; i++){
		if (this->vector[i + 1] - this->vector[i] < shortest)
			shortest = this->vector[i + 1] - this->vector[i];
	}
	return shortest;
}

int 	Span::longestSpan(){
	if (this->vector.size() < 2)
		throw NotFound();
	std::sort(this->vector.begin(), this->vector.end());
	int longest = this->vector[this->vector.size() - 1] - this->vector[0];
	return longest;
}