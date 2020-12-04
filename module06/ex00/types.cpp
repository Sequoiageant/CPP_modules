/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:43:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/04 16:57:46 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	// std::cout << "Type of int: " << typeid(int).name() << std::endl;
	// std::cout << "Type of int*: " << typeid(int*).name() << std::endl;
	// std::cout << "Type of float: " << typeid(float).name() << std::endl;
	// std::cout << "Type of double: " << typeid(double).name() << std::endl;
	// std::cout << "Type of char: " << typeid(char).name() << std::endl;
	// std::cout << "Type of char*: " << typeid(char*).name() << std::endl;
	// std::cout << "Type of string: " << typeid(std::string).name() << std::endl;

	float f = 42.42f;
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);
	char c = static_cast<char>(f);

	std::cout << "Float " << f << std::endl;
	std::cout << "Int " << i << std::endl;
	std::cout << "Double " << d << std::endl;
	std::cout << "char " << c << std::endl;

	double dd = 45.;
	std::cout << "Double . " << dd << std::endl;

	float ff = 45.f;
	std::cout << "Float .f " << dd << std::endl;
	return 0;
}