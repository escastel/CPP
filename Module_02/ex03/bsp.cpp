/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:17:42 by escastel          #+#    #+#             */
/*   Updated: 2024/06/12 16:47:34 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed	w1, w2;
	Point	d(b.getX() - a.getX(), b.getY() - a.getY());
	Point	e(c.getX() - a.getX(), c.getY() - a.getY());
	
	w1 = (e.getX() * (a.getY() - point.getY()) + e.getY() * (point.getX() - a.getX())) / (d.getX() * e.getY() - d.getY() * e.getX());
	w2 = (point.getY() - a.getY() - w1 * d.getY()) / e.getY();
	if (w1.toFloat() >= 0.0f && w2.toFloat() >= 0.0f && (w1.toFloat() + w2.toFloat()) <= 1.0f)
		return (true);
	return (false);
}