/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:15:19 by escastel          #+#    #+#             */
/*   Updated: 2024/06/20 18:39:22 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
	private:
			std::string _ideas[100];
	public:
			Brain();
			Brain(const Brain& copy);
			Brain& operator = (const Brain& src);
			~Brain();
			void		setIdea(std::string	idea);
			std::string	getIdea(int	index);
};

#endif