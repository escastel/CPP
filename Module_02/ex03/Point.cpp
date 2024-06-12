/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:17:15 by escastel          #+#    #+#             */
/*   Updated: 2024/06/12 16:32:30 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0), _y(0){}

Point::Point(const float x, const float y): _x(x), _y(y){}

Point::Point(Fixed x, Fixed  y): _x(x), _y(y){}

Point::Point(const Point& copy): _x(copy._x), _y(copy._y){}

Point& Point::operator = (const Point &src){
	(void)src;
	return (*this);
}

Point::~Point(){}

Fixed	Point::getX(void)const{
	return (this->_x);
}

Fixed	Point::getY(void)const{
	return (this->_y);
}