/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:41:02 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 12:13:22 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Array<int> tab(5);
	Array<int> tab2;

	tab[0] = 2;
	tab[3] = 7;
	std::cout << "tab: " << tab;

	std::cout << std::endl << "Assignation:" << std::endl;
	tab2 = tab;
	std::cout << "tab2 (=tab) : "  << tab2;	
	
	std::cout << std::endl << "Copy:" << std::endl;
	Array<int> tab3(tab2);
	std::cout << "tab3 (= copy of tab2) : " << tab3 << std::endl;	

	try {
		tab[6] = 5;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "Array of Fixed:" << std::endl;
	Fixed a(1.1f), b(2.4f), c(3.5f), d(4.2f);
	Array<Fixed> tab4(4);
	tab4[0] = a;
	tab4[1] = b;
	tab4[2] = c;
	tab4[3] = d;
	std::cout << "tab4: " << tab4;


	std::cout << std::endl << "Array instanciated on the heap:" << std::endl;
	Array<int> *tab5 = new Array<int>(5);
	(*tab5)[0] = 1;
	std::cout << "tab5[0]: " << (*tab5)[0] << std::endl;
	delete tab5;

	return 0;
}