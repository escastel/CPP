/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:07:53 by escastel          #+#    #+#             */
/*   Updated: 2024/06/12 13:21:19 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

Fixed::Fixed(){
	this->_nb_value = 0;
}

Fixed::Fixed(const int	in){
	this->_nb_value = in << this->_fract_bits;
}

Fixed::Fixed(const float ft){
	this->_nb_value = roundf(ft * (1 << this->_fract_bits));
}

Fixed::Fixed(const Fixed& copy){
	if (this != &copy)
		*this = copy;
}

Fixed& Fixed::operator = (const Fixed& src){
	if (this != &src)
		this->_nb_value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
}

bool Fixed::operator > (const Fixed& src){
	if (src._nb_value > this->_nb_value)
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed& src){
	if (src._nb_value < this->_nb_value)
		return (true);
	return (false); 
}

bool Fixed::operator >= (const Fixed& src){
	if (src._nb_value >= this->_nb_value)
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed& src){
	if (src._nb_value <= this->_nb_value)
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed& src){
	if (src._nb_value == this->_nb_value)
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed& src){
	if (src._nb_value != this->_nb_value)
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
	
	this->_nb_value++;
	return (obj);
}

Fixed Fixed::operator -- (int){
	Fixed	obj(*this);
	
	this->_nb_value--;
	return (obj);
}
Fixed& Fixed::operator ++ (void){
	this->_nb_value++;
	return (*this);
}

Fixed& Fixed::operator -- (void){
	this->_nb_value--;
	return (*this);
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