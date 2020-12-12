/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:12:13 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/12 15:30:06 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "iter.hpp"
#include "Fixed.hpp"

int main( void ) {

	int tab[4] = { 1, 2, 3, 4 };
	iter<int>(tab, 4, ft_increment<int>);

	float tabf[4] = { 1.2f, 2.4f, 3.0f, 4.2f };
	iter<float>(tabf, 4, ft_increment<float>);
	
	char tabc[4] = { 'a', 'b', 'c', 'd' };
	iter<char>(tabc, 4, ft_print<char>);
	iter<char>(tabc, 4, ft_increment<char>);

	std::string tabS[4] = { "str1", "str2", "str3", "str4" };
	iter<std::string>(tabS, 4, ft_switch<std::string>);

	Fixed a(1), b(2), c(3), d(4);
	Fixed tabT[4] = { a, b, c, d };
	iter<Fixed>(tabT, 4, ft_increment<Fixed>);
	


	std::cout.precision(1);
	std::cout << setiosflags(std::ios::fixed);
	for (int i = 0; i < 4; ++i)
	{
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 4; ++i)
	{
		std::cout << tabf[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 4; ++i)
	{
		std::cout << tabc[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 4; ++i)
	{
		std::cout << tabS[i] << " ";
	}
	std::cout << std::endl;

	std::cout.precision(3);
	for (int i = 0; i < 4; ++i)
	{
		std::cout << tabT[i] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
