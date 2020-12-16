/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:36:00 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/16 09:21:08 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <vector>
#include <list>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

void displayInt(int i)
{
	std::cout << i << " ";
}

int getRandomInt(void)
{
	int rand = 0;
	int sign = 0;

	rand = std::rand()%180;
	sign = std::rand()%2;
	return (sign == 0 ? rand : -rand);
}

int main(void)
{
	std::srand ( unsigned ( std::time(0) ) );

	std::cout << "Given main:" << std::endl;
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
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
		std::cout << "shortestSpan: "  << sp.shortestSpan() << std::endl;
		sp.addNumber(42);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}


	std::cout << std::endl << "5 random numbers (from a list):" << std::endl;
	Span sp2 = Span(5);
	std::list<int> v2(5);
	std::generate (v2.begin(), v2.end(), getRandomInt);
	
	sp2.addNumber(v2.begin(), v2.end());
	for_each(v2.begin(), v2.end(), displayInt);
	std::cout << std::endl;

	std::cout << "longestSpan: " << sp2.longestSpan() << std::endl;
	std::cout << "shortestSpan: "  << sp2.shortestSpan() << std::endl;
	



	std::cout << std::endl << "10 000 numbers:" << std::endl;
	Span sp3 = Span(10000);
	std::vector<int> v3(10000);
	std::generate (v3.begin(), v3.end(), getRandomInt);
	
	sp3.addNumber(v3.begin(), v3.end());
	// for_each(v3.begin(), v3.end(), displayInt);
	// std::cout << std::endl;

	std::cout << "longestSpan: " << sp3.longestSpan() << std::endl;
	std::cout << "shortestSpan: "  << sp3.shortestSpan() << std::endl;
	



	std::cout << std::endl << "No Span to find:" << std::endl;
	Span sp4 = Span(1);
	sp4.addNumber(42);
	
	try {
		std::cout << "longestSpan: " << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}	
	try {
		std::cout << "shortestSpan: "  << sp4.shortestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

}
