/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:12:14 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 20:33:20 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>void	iter(T *array, int length, void (*f)(T &)){
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>void	printValue(T data){
	std::cout << "Content: " << data << std::endl;
}

#endif