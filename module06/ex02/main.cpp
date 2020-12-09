/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:08:05 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/09 10:33:34 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main(void)
{
	A a;
	B b;
	C c;

	std::cout << "identify_from_pointer:" << std::endl;
	identify_from_pointer(&a);
	identify_from_pointer(&b);
	identify_from_pointer(&c);

	std::cout << std::endl << "identify_from_reference:" << std::endl;
	identify_from_reference(a);
	std::cout << std::endl;
	identify_from_reference(b);
	std::cout << std::endl;
	identify_from_reference(c);

	return 0;
}
