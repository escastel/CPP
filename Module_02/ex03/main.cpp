/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:07:26 by escastel          #+#    #+#             */
/*   Updated: 2024/06/12 16:50:30 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void){
	Point	const a(0, 0);
	Point	const b(4, 0);
	Point	const c(2, 4);
	Point	const point(2, 2);
	// Point	const point(0, 1); NO VALIDO

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangule" << std::endl;
	else
		std::cout << "The point is not inside the triangule" << std::endl;
	return 0;
}