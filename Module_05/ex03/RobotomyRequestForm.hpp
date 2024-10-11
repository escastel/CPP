/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:13:46 by escastel          #+#    #+#             */
/*   Updated: 2024/10/11 12:39:43 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
			std::string	_target;
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(const RobotomyRequestForm& copy);
			RobotomyRequestForm& operator = (const RobotomyRequestForm& src);
			~RobotomyRequestForm();
			std::string	getTarget() const;
			bool		execute(Bureaucrat const &executor) const;
};

std::ostream&	operator<<(std::ostream &out, const RobotomyRequestForm &src);

#endif