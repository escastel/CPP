/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:18:12 by escastel          #+#    #+#             */
/*   Updated: 2024/06/12 16:19:33 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
			Fixed const	_x;
			Fixed const	_y;
	public:
			Point();
			Point(const float x, const float y);
			Point(Fixed	const x, Fixed const y);
			Point(const Point& copy);
			Point& operator = (const Point& src);
			Fixed	getX(void)const;
			Fixed	getY(void)const;
			~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif