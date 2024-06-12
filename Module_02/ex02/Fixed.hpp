/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:08:10 by escastel          #+#    #+#             */
/*   Updated: 2024/06/12 13:17:11 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <stdbool.h>
# include <cmath>

class Fixed
{
	private:
			int					_nb_value;
			static int	const	_fract_bits;
	public:
			Fixed();
			Fixed(const int in);
			Fixed(const float ft);
			Fixed(const	Fixed& copy);
			Fixed& operator = (const Fixed& src);
			bool operator > (const Fixed& src);
			bool operator < (const Fixed& src);
			bool operator >= (const Fixed& src);
			bool operator <= (const Fixed& src);
			bool operator == (const Fixed& src);
			bool operator != (const Fixed& src);
			Fixed operator + (const Fixed& src);
			Fixed operator - (const Fixed& src);
			Fixed operator * (const Fixed& src);
			Fixed operator / (const Fixed& src);
			Fixed operator ++ (int);
			Fixed operator -- (int);
			Fixed& operator ++(void);
			Fixed& operator -- (void);
			~Fixed();

			int					toInt(void)const;
			float				toFloat(void)const;
			int					getRawBits(void)const;
			void 				setRawBits(int const raw);
			static Fixed&		min(Fixed& d1, Fixed& d2);
			static Fixed&		max(Fixed& d1, Fixed& d2);
			static const Fixed&	min(Fixed const& d1, Fixed const& d2);
			static const Fixed&	max(Fixed const& d1, Fixed const& d2);
};
std::ostream& operator << (std::ostream& out, const Fixed& src);

#endif