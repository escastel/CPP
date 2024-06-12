/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:07:53 by escastel          #+#    #+#             */
/*   Updated: 2024/06/12 18:09:28 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_nbValue = 0;
}

Fixed::Fixed(const int	in){
	std::cout << "Int constructor called" << std::endl;
	this->_nbValue = in << this->_fractBits;
}

Fixed::Fixed(const float ft){
	std::cout << "Float constructor called" << std::endl;
	this->_nbValue = roundf(ft * (1 << this->_fractBits));
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

bool Fixed::operator > (const Fixed& src){
	if (src._nbValue > this->_nbValue)
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed& src){
	if (src._nbValue < this->_nbValue)
		return (true);
	return (false); 
}

bool Fixed::operator >= (const Fixed& src){
	if (src._nbValue >= this->_nbValue)
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed& src){
	if (src._nbValue <= this->_nbValue)
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed& src){
	if (src._nbValue == this->_nbValue)
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed& src){
	if (src._nbValue != this->_nbValue)
		return (true);
	return (false);	
}

Fixed Fixed::operator + (const Fixed& src){
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator - (const Fixed& src){
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator * (const Fixed& src){
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator / (const Fixed& src){
	return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed Fixed::operator ++ (int){
	Fixed	obj(*this);
	
	this->_nbValue++;
	return (obj);
}

Fixed Fixed::operator -- (int){
	Fixed	obj(*this);
	
	this->_nbValue--;
	return (obj);
}
Fixed& Fixed::operator ++ (void){
	this->_nbValue++;
	return (*this);
}

Fixed& Fixed::operator -- (void){
	this->_nbValue--;
	return (*this);
}

int	Fixed::toInt(void)const{
	return (this->_nbValue >> this->_fractBits);
}

float	Fixed::toFloat(void)const{
	return (static_cast<float>(this->_nbValue) / (1 << this->_fractBits));
}

int	Fixed::getRawBits(void) const{
	return (this->_nbValue);
}

void	Fixed::setRawBits(int const raw){
	this->_nbValue = raw;
}

Fixed&	Fixed::min(Fixed& d1, Fixed& d2){
	if (d1.getRawBits() < d2.getRawBits())
		return (d1);
	return (d2);
}

Fixed& Fixed::max(Fixed& d1, Fixed& d2){
	if (d1.getRawBits() > d2.getRawBits())
		return (d1);
	return (d2);
}

const Fixed& Fixed::min(const Fixed& d1, const Fixed& d2){
	if (d1.getRawBits() < d2.getRawBits())
		return (d1);
	return (d2);
}
const Fixed& Fixed::max(Fixed const& d1, Fixed const& d2){
	if (d1.getRawBits() > d2.getRawBits())
		return (d1);
	return (d2);
}

std::ostream&	operator<<(std::ostream &out, const Fixed &src){
	return (out << src.toFloat());	
}