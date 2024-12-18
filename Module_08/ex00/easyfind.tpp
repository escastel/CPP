/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:35:53 by escastel          #+#    #+#             */
/*   Updated: 2024/12/18 14:13:06 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char*	NotFound::what() const throw()
{
	return "Value not found";
};

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
		if (*it == n)
			return it;
	throw NotFound();
}