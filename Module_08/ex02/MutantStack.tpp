/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:07:09 by escastel          #+#    #+#             */
/*   Updated: 2024/12/18 18:26:43 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>(){}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &src): std::stack<T>(src){}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator = (const MutantStack	&src){std::stack<T>::operator = (src); return(*this);}

template<typename T>
MutantStack<T>::~MutantStack(){}