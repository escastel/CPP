/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:20:48 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 15:19:51 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>


class   Contact{
        private:
				std::string		_data[5];
				std::string		_fields[5];
		public:
				Contact(void);
				~Contact(void);
				void	saveContact(void);
				void	printContact(void);
				void	printSearch(int flag, int index);
};

#endif