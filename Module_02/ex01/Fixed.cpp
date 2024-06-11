/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:07:53 by escastel          #+#    #+#             */
/*   Updated: 2024/06/11 16:23:00 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_nb_value = 0;
}

Fixed::Fixed(const int	in){
	std::cout << "Int constructor called" << std::endl;
	this->_nb_value = in << this->_fract_bits;
}

Fixed::Fixed(const float ft){
	std::cout << "Float constructor called" << std::endl;
	this->_nb_value = roundf(ft * (1 << this->_fract_bits));
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Fixed &Fixed::operator = (const Fixed &src){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_nb_value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::toInt(void)const{
	return (this->_nb_value >> this->_fract_bits);
}

float	Fixed::toFloat(void)const{
	return (static_cast<float>(this->_nb_value) / (1 << this->_fract_bits));
}

int	Fixed::getRawBits(void) const{
	return (this->_nb_value);
}

void	Fixed::setRawBits(int const raw){
	this->_nb_value = raw;
}

std::ostream&	operator<<(std::ostream &out, const Fixed &src){
	return (out << src.toFloat());	
}