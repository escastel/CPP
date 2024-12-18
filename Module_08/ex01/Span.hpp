/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:14:58 by escastel          #+#    #+#             */
/*   Updated: 2024/12/18 18:13:57 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <string>

class NotFound: public std::exception{
	public:
		const char*  what() const throw();
};

class Span
{
	private:
		unsigned int		n;
		std::vector<int>	vector;
		Span(void);
	
	public:
			Span(unsigned int n);
			Span(Span const &src);
			Span	&operator=(Span const &src);
			~Span(void);

			void	addNumber(int* array, size_t size);
			void	addNumber(int n);
			int		shortestSpan(void);
			int		longestSpan(void);

};

#endif