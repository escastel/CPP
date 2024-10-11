/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:11:22 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 14:20:19 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class AForm;

class Intern
{
	public:
			Intern();
			Intern(const Intern& copy);
			Intern& operator = (const Intern& src);
			~Intern();
			AForm	*makeForm(std::string formName, std::string target);
};

#endif