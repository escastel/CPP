/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:20:48 by escastel          #+#    #+#             */
/*   Updated: 2024/06/06 13:15:20 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>


class   Contact{
        private:
				std::string		data[5];
				std::string		fields[5];
		public:
				Contact(void);
				~Contact(void);
				void	save_contact(void);
				void	print_contact(void);
				void	print_search(int flag, int index);
};

#endif