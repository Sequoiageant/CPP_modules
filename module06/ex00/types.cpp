/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:43:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/04 19:20:59 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

std::string convertFloat(float value) {
  std::ostringstream o;
  if (!(o << value << "f"))
    return "";
  return o.str();
}
std::string convertDouble(double value) {
  std::ostringstream o;
  if (!(o << value))
    return "";
  return o.str();
}

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
	std::cout << "char size =1 " << static_cast<char>(33) << std::endl;
	std::cout << "char size >1 " << c << std::endl;

	double dd = 45.;
	std::cout << "Double . " << dd << std::endl;

	float ff = 45.f;
	std::cout << "Float .f " << dd << std::endl;

	char s[1]; s[0] = 'a';
	char sc = s[0];
	std::cout << "Char from str " << sc << std::endl;

	std::cout << "Convert Double:" << convertDouble(42.42) <<std::endl;
	std::cout << "Convert Float:" << convertFloat(42.42f) <<std::endl;

	return 0;
}