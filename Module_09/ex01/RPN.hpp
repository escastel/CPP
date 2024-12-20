/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:45:38 by escastel          #+#    #+#             */
/*   Updated: 2024/12/19 19:37:17 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>
# include <cstdlib>
# include <string>
# include <algorithm>

class RPN
{
	private:
			std::stack<long int>	num;
			RPN();
			RPN(const RPN	&src);
			RPN&	operator = (const RPN &src);
			
	public:
			RPN(std::string	arg);
			~RPN();
			int		checkArg(std::string arg);
			void	operation(char c);
			void	calculator(std::string arg);
};

#endif