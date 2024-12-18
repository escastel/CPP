/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:55:25 by escastel          #+#    #+#             */
/*   Updated: 2024/12/18 14:01:34 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <stdlib.h>
# include <vector>
# include <algorithm>

class NotFound: public std::exception{
	public:
		const char*  what() const throw();
};

template <class T>
typename T::iterator easyfind(T &container, int n);

# include "easyfind.tpp"

#endif