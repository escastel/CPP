/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:36:28 by escastel          #+#    #+#             */
/*   Updated: 2024/12/15 02:50:24 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <string.h>
# include <stdint.h>

struct Data
{
	std::string	type;
};

class Serializer
{
	private:
			Serializer();
			Serializer(const Serializer& copy);
			Serializer& operator = (const Serializer& src);
	public:
			~Serializer();
			static uintptr_t serialize(Data* ptr);
			static Data* deserialize(uintptr_t raw);
};

#endif