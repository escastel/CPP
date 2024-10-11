/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:13:06 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 12:52:03 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
#	include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
			std::string	_target;
	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm& copy);
			ShrubberyCreationForm& operator = (const ShrubberyCreationForm& src);
			~ShrubberyCreationForm();
			std::string	getTarget() const;
			bool		execute(Bureaucrat const & executor) const;
};

std::ostream&	operator<<(std::ostream &out, const ShrubberyCreationForm &src);
#endif