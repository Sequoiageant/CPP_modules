/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:12:13 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/10 12:31:36 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "iter.hpp"
#include "Fixed.hpp"

int main( void ) {

	int tab[4] = { 5, 2, 3, 1 };
	::iter(tab, 4, ft_increment);

	float tabf[4] = { 5.2f, 3.4f, 1.0f, 2.2f };
	::iter(tabf, 4, ft_increment);
	
	char tabc[4] = { 'a', 'b', 'c', 'd' };
	::iter(tabc, 4, ft_increment);

	std::string tabS[4] = { "str1", "str2", "str3", "str4" };
	::iter(tabS, 4, ft_switch);

	Fixed a(1), b(2), c(3), d(4);
	Fixed tabT[4] = { a, b, c, d };
	::iter(tabT, 4, ft_increment);
	


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
