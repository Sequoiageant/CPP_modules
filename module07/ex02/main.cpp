/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:41:02 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/10 18:36:42 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> tab(5);
	Array<int> tab2;

	tab[3] = 7;
	std::cout << tab;

	tab2 = tab;
	std::cout << tab2;
	

	try {
		tab[6] = 5;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	return 0;
}