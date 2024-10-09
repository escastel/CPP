/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:35:31 by escastel          #+#    #+#             */
/*   Updated: 2024/10/09 18:29:15 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string.h>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
			std::string const	_name;
			int const			_gradeSign;
			int const			_gradeExecute;
			bool				_signed;
	public:
			Form();
			Form(std::string name, int gradeSign);
			Form(const Form& copy);
			Form& operator = (const Form& src);
			~Form();
			std::string const	getName() const;
			int					getGradeSign() const;
			int					getGradeExecute() const;
			bool				getSigned() const;
			void				beSigned(Bureaucrat &bureaucrat);
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

std::ostream&	operator<<(std::ostream &out, const Form &src);
#endif