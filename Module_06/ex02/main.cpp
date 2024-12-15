/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 03:03:16 by escastel          #+#    #+#             */
/*   Updated: 2024/12/15 03:03:23 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base	*base = generate();

	identify(base);
	identify(*base);

	delete base;
	return 0;
}