/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:36:20 by escastel          #+#    #+#             */
/*   Updated: 2024/12/15 02:52:11 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data	*data = new Data();
	data->type = "My data";
	uintptr_t	serializedData = Serializer::serialize(data);
	Data	*deserializedData = Serializer::deserialize(serializedData);
	
	std::cout << "Data: " << data->type << std::endl;
	std::cout << "Serialized data: " << serializedData << std::endl;
	std::cout << "Deserialized data: " << deserializedData->type << std::endl;
	
	delete data;
	return 0;
}