/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:24:10 by escastel          #+#    #+#             */
/*   Updated: 2024/12/16 19:39:23 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdlib.h>

template <typename T>

class Array {
	private:
			T				*array;
			unsigned int	length;
	public:
			Array();
			Array(unsigned int n);
			Array(Array const &src);
			Array &operator=(Array const &src);
			~Array();

			unsigned int size() const;
			T &operator[](int index) const;
			class OutOfLimitsException : public std::exception {
				const char *what() const throw();
			};
};

# include "Array.tpp"
#endif