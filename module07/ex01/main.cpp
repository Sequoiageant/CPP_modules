/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:12:13 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/21 15:37:30 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "iter.hpp"
#include "Fixed.hpp"

int main( void ) {

	std::cout << "------ Before iteration ------" << std::endl;
	int tab[4] = { 1, 2, 3, 4 };
	iter<int>(tab, 4, ft_print<int>);
	iter<int>(tab, 4, ft_increment<int>);
	std::cout << std::endl;

	float tabf[4] = { 1.2f, 2.4f, 3.0f, 4.2f };
	iter<float>(tabf, 4, ft_print<float>);
	iter<float>(tabf, 4, ft_increment<float>);
	std::cout << std::endl;
	
	char tabc[4] = { 'a', 'b', 'c', 'd' };
	iter<char>(tabc, 4, ft_print<char>);
	iter<char>(tabc, 4, ft_increment<char>);
	std::cout << std::endl;

	std::string tabS[4] = { "str1", "str2", "str3", "str4" };
	iter<std::string>(tabS, 4, ft_print<std::string>);
	iter<std::string>(tabS, 4, ft_switch<std::string>);
	std::cout << std::endl;

	Fixed a(1), b(2), c(3), d(4);
	Fixed tabT[4] = { a, b, c, d };
	iter<Fixed>(tabT, 4, ft_print<Fixed>);
	iter<Fixed>(tabT, 4, ft_increment<Fixed>);
	std::cout << std::endl;
	


	std::cout << "------ After iteration ------" << std::endl;
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
