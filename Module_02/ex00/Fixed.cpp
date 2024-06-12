/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:07:53 by escastel          #+#    #+#             */
/*   Updated: 2024/06/12 18:09:10 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_nbValue = 0;
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Fixed& Fixed::operator = (const Fixed& src){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_nbValue = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbValue);
}

void	Fixed::setRawBits(int const raw){
	this->_nbValue = raw;
}
