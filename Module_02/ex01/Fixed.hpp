/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:08:10 by escastel          #+#    #+#             */
/*   Updated: 2024/06/11 16:21:59 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
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
			Fixed &operator = (const Fixed& src);
			~Fixed();

			int		toInt(void)const;
			float	toFloat(void)const;
			int		getRawBits(void)const;
			void 	setRawBits(int const raw);
};
std::ostream& operator <<(std::ostream &out, const Fixed &src);

#endif