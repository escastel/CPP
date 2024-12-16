/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:02:16 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 20:35:03 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include "iostream"

template <typename T>void	swap(T &a, T &b){
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>T min(T &a, T &b){
	if (a < b)
		return (a);
	return (b);
}

template <typename T>T	max(T &a, T &b){
	if (a > b)
		return (a);
	return (b);
}

#endif