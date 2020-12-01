/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:34:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 18:26:06 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "/*Grade too Low*/" << std::endl;
	try {
		Bureaucrat bob("bob", 151);
		std::cout << bob; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "/*Grade too High*/" << std::endl;
	try {
		Bureaucrat bob("bob", 0);
		std::cout << bob; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "/*Good grades at limits*/" << std::endl;
	try {
		Bureaucrat bob("bob", 1);
		std::cout << bob; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat jim("jim", 150);
		std::cout << jim; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "/*Invalid Decrement*/" << std::endl;
	try {
		Bureaucrat jim("jim", 150);
		jim.decrementGrade();
		std::cout << jim; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "/*Invalid Increment*/" << std::endl;
	try {
		Bureaucrat jim("jim", 1);
		jim.incrementGrade();
		std::cout << jim; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "/*Basic Decrement*/" << std::endl;
	try {
		Bureaucrat jim("jim", 5);
		jim.decrementGrade();
		std::cout << jim; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "/*Basic Increment*/" << std::endl;
	try {
		Bureaucrat jim("jim", 5);
		jim.incrementGrade();
		std::cout << jim; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "/*Assignation*/" << std::endl;
	Bureaucrat bob("bob", 1);
	Bureaucrat jim("jim", 2);

	std::cout << jim;

	jim = bob;

	std::cout << jim;

	return 0;
}