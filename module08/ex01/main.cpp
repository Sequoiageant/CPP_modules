/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:36:00 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/14 18:26:13 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

void displayInt(int i)
{
	std::cout << i << " ";
}

int main(void)
{
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::vector<int> v = sp.getNbrs();
		for_each(v.begin(), v.end(), displayInt);
		std::cout << std::endl;

		sp.addNumber(42);		
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
}
