/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:23:53 by escastel          #+#    #+#             */
/*   Updated: 2024/12/16 19:39:11 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(){
	this->array = new T[0];
	this->length = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	this->array = new T[n];
	this->length = n;
}

template <typename T>
Array<T>::Array(Array const &src) {
	this->array = new T[src.size()];
	for (unsigned int i = 0; i < length; i++)
		this->array[i] = src.array[i];
	this->length = src.length;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &src) {
	if (this != &src)
	{
		if (this->array)
			delete[] this->array;
		this->array = new T[src.size()];
		for (unsigned int i = 0; i < src.length; i++)
			this->array[i] = src.array[i];
		this->length = src.length;	
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	if (this->array)
		delete[] this->array;
}

template <typename T>
unsigned int Array<T>::size() const { return (this->length); }

template <typename T>
T &Array<T>::operator[](int index) const {
	if (index >= (int)this->length || index < 0)
		throw OutOfLimitsException();
	return (this->array[index]);
}

template <typename T>
const char *Array<T>::OutOfLimitsException::what() const throw() {
	return ("Index out of limits");
}