/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:57:23 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:14:36 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

int	ponyOnTheStack(void)
{
	Pony panpan("panpan", "red", "double");
	Pony cucu("matt", "blue", "simple");

	std::cout << "We are ponies on Stack !" << std::endl;

	panpan.displayColor();
	cucu.displayColor();

	return 0;
}

int	ponyOnTheHeap(void)
{
	Pony *pinky = new Pony("pinky pie", "green", "double");
	Pony *apple = new Pony("applejack", "orange", "simple");

	std::cout << "We are ponies on Heap !" << std::endl;

	pinky->displayColor();
	apple->displayColor();

	delete pinky;
	delete apple;

	return 0;
}

int main(void)
{
	ponyOnTheStack();
	std::cout << "Back to main()" << std::endl;
	std::cout << std::endl;
	ponyOnTheHeap();
	std::cout << "Back to main()" << std::endl;
	return 0;
}