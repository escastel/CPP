/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:05:13 by escastel          #+#    #+#             */
/*   Updated: 2025/01/10 17:54:14 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <sys/time.h>
# include <algorithm>
# include <iostream>
# include <string>
# include <vector>
# include <list>

class PmergeMe
{
	private:
			std::list<long int>		list;
			std::vector<long int>	vector;
			PmergeMe();
	public:
			PmergeMe(std::string arg[]);
			PmergeMe(const PmergeMe& src);
			PmergeMe&	operator = (const PmergeMe& copy);
			~PmergeMe();
			int		checkArg(std::string arg[]);
			void	saveData(std::string arg[]);
			void	sortList(std::list<long int>::iterator p_it, std::list<long int>::iterator r_it);
			void	sortVector(std::vector<long int>::iterator p_it, std::vector<long int>::iterator r_it);
			void	mergeList(std::list<long int>::iterator p_it, std::list<long int>::iterator r_it, std::list<long int>::iterator q_it);
			void	mergeVector(std::vector<long int>::iterator p_it, std::vector<long int>::iterator r_it, std::vector<long int>::iterator q_it);
			void	insertionList(std::list<long int>::iterator p_it, std::list<long int>::iterator r_it);
			void	insertionVector(std::vector<long int>::iterator p_it, std::vector<long int>::iterator r_it);
};

#endif