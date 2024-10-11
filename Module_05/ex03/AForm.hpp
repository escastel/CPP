/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:35:31 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 17:00:30 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <string.h>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
			std::string const	_name;
			int const			_gradeSign;
			int const			_gradeExecute;
			bool				_signed;
	public:
			AForm();
			AForm(std::string name, int gradeSign, int gradeExecute);
			AForm(const AForm& copy);
			AForm& operator = (const AForm& src);
			virtual ~AForm();
			std::string const	getName() const;
			int					getGradeSign() const;
			int					getGradeExecute() const;
			bool				getSigned() const;
			void				beSigned(Bureaucrat &bureaucrat);
			virtual bool		execute(Bureaucrat const & executor) const = 0;
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
			class	NotSignedException: public std::exception
			{
				public:
						const char	*what() const throw();
			};
};

std::ostream&	operator<<(std::ostream &out, const AForm &src);
#endif