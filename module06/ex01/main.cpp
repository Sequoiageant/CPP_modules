/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:46:59 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/07 18:17:57 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <iostream>
#include <sstream>

int main(void)
{
	std::ostringstream o;
	std::string s1 = "abc123";
	std::string s2 = "cde345";
	int	a = 42;

	o << s1 << a << s2;
	std::cout << o << std::endl;

	const std::string& tmp = o.str();
	void *p = const_cast<char *>(tmp.c_str());
	



	char *str = reinterpret_cast<char *>(p);
	char *b = reinterpret_cast<char *>(str);
	std::cout << str << std::endl;
	std::cout << b << std::endl;


	// std::string s3 = "2147483648";
	std::string s3 = "+INF";
	int i = 0;
	double d;

	std::stringstream ss;

	ss << s3;
	ss >> i;
	if (ss.fail())
		std::cout << "ss to int FAILED" << std::endl;
	ss.clear();
	ss >> d;
	if (ss.fail())
		std::cout << "ss to double FAILED" << std::endl;

	std::cout << i << std::endl;
	std::cout << d << std::endl;

	return 0;
}