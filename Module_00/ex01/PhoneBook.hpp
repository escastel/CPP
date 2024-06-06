/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:20:51 by escastel          #+#    #+#             */
/*   Updated: 2024/06/06 13:30:41 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class   PhoneBook{
		private:
				Contact	contacts[8];
				int		index;
				int		count;
		public:
				PhoneBook(void);
				~PhoneBook(void);
				void	pb_software(void);
				void	add_contact(void);
				void	search_contact(void);
};

#endif