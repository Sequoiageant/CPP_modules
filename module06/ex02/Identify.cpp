/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:06:58 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/09 10:30:48 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <exception>

void identify_from_pointer(Base * p)
{
	A* a = dynamic_cast<A *>(p);
	B* b = dynamic_cast<B *>(p);
	C* c = dynamic_cast<C *>(p);
	if (a != NULL)
		std::cout << "A" << :: std::endl;
	else if (b != NULL)
		std::cout << "B" << :: std::endl;
	else if (c != NULL)
		std::cout << "C" << :: std::endl;
	else
		std::cout << "Not type A, B or C" << :: std::endl;
}

void identify_from_reference( Base & p)
{
	try {
		A& a = dynamic_cast<A &>(p);
		std::cout << "A" << :: std::endl;
		(void)a;
	}
	catch(const std::exception& e) {
		std::cerr << "Not a type A: " << e.what() << '\n';
	}
	try {
		B& b = dynamic_cast<B &>(p);
		std::cout << "B" << :: std::endl;
		(void)b;
	}
	catch(const std::exception& e) {
		std::cerr << "Not a type B: " << e.what() << '\n';
	}
	try {
		C& c = dynamic_cast<C &>(p);
		std::cout << "C" << :: std::endl;
		(void)c;
	}
	catch(const std::exception& e) {
		std::cerr << "Not a type C: " << e.what() << '\n';
	}
}
