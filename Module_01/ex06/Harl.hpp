/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:52:48 by escastel          #+#    #+#             */
/*   Updated: 2024/06/10 18:05:28 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string> 

class Harl{
	private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
	public:
			Harl();
			~Harl();
			void complain(std::string level);
};

#endif