/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:20:51 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 15:22:09 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class   PhoneBook{
		private:
				Contact	_contacts[8];
				int		_index;
				int		_count;
		public:
				PhoneBook(void);
				~PhoneBook(void);
				void	pbSoftware(void);
				void	addContact(void);
				void	searchContact(void);
};

#endif