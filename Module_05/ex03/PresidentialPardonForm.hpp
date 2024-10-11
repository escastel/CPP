/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:14:00 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 12:39:40 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESIDENTIALPARDONFORM_HPP
# define RESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
			std::string	_target;
	public:
			PresidentialPardonForm();
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(const PresidentialPardonForm& copy);
			PresidentialPardonForm& operator = (const PresidentialPardonForm& src);
			~PresidentialPardonForm();
			std::string	getTarget() const;
			bool		execute(Bureaucrat const &executor) const;
};

std::ostream&	operator<<(std::ostream &out, const PresidentialPardonForm &src);

#endif