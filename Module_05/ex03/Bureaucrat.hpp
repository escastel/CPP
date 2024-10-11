/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:25:02 by escastel          #+#    #+#             */
/*   Updated: 2024/10/10 20:07:11 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string.h>
# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
			std::string const	_name;
			int					_grade;
	public:
			Bureaucrat();
			Bureaucrat(std::string name, int grade);
			Bureaucrat(const Bureaucrat& copy);
			Bureaucrat& operator = (const Bureaucrat& src);
			~Bureaucrat();
			std::string const	getName() const;
			int					getGrade() const;
			void				signForm(AForm &signature);
			void				incrementGrade();
			void				decrementGrade();
			void				executeForm(AForm const &form);
			class	GradeTooLowException: public std::exception
			{
				public:
						const char	*what() const throw();
			};
			class	GradeTooHighException: public std::exception
			{
				public:
						const char	*what() const throw();
			};
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &src);

#endif