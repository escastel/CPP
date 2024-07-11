/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:08:10 by escastel          #+#    #+#             */
/*   Updated: 2024/07/11 16:19:15 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
			int					_nbValue;
			static int	const	_fractBits;
	public:
			Fixed();
			Fixed(const	Fixed& copy);
			Fixed& operator = (const Fixed& src);
			~Fixed();
			int getRawBits(void)const;
			void setRawBits(int const raw);
};

#endif