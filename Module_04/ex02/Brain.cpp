/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:15:00 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 19:03:13 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain: Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "";
}

Brain::Brain(const Brain& copy){
	std::cout << "Brain: Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Brain& Brain::operator = (const Brain& src){
	std::cout << "Brain: Copy assignment constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = src._ideas[i];	
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain: Destructor called" << std::endl;
}

void	Brain::setIdea(std::string	idea){
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i].empty())
		{
			this->_ideas[i] = idea;
			return ;	
		}
	}
	std::cout << "This Brain is full of ideas !" << std::endl;
}

std::string	Brain::getIdea(int	index){
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	return ("Error: Index out of limits.");
}