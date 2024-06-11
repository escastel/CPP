/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:08:10 by escastel          #+#    #+#             */
/*   Updated: 2024/06/11 15:20:18 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
			int	_nb_value;
			static int	const	_fract_bits;
	public:
			Fixed();
			Fixed(const	Fixed& copy);
			Fixed &operator = (const Fixed& src);
			~Fixed();

			int getRawBits(void)const;
			void setRawBits(int const raw);
};

#endif