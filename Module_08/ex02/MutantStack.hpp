/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:07:19 by escastel          #+#    #+#             */
/*   Updated: 2024/12/18 18:31:53 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <algorithm>

template <class T>
class MutantStack: public std::stack<T>
{
	public:
			MutantStack();
			MutantStack(const MutantStack	&src);
			MutantStack&	operator = (const MutantStack	&src);
			~MutantStack();
			typedef typename	std::stack<T>::container_type::iterator	iterator;
			iterator	begin(){return (this->c.begin());}
			iterator	end(){return (this->c.end());}
};

# include "MutantStack.tpp"

#endif