/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:34:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/02 09:39:50 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form CB21("CB21", 3, 3);

	std::cout << "/*Bureaucrat can sign*/" << std::endl;
	try {
		Bureaucrat jim("jim", 3);
		jim.signForm(&CB21);
		std::cout << jim; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "/*Cannot sign because grade too Low*/" << std::endl;
	try {
		Bureaucrat bob("bob", 5);
		bob.signForm(&CB21);
		std::cout << bob; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "/*Form cannot be created*/" << std::endl;
	try {
		Form CB22("CB22", 0, 3);
		std::cout << CB21;
	}
	catch(const std::exception& e) {
		std::cerr << "Form " << e.what() << std::endl;
	}

	std::cout << std::endl << "/*Form Assignation*/" << std::endl;
	Form CB42("CB42", 42, 42);

	std::cout << CB42;
	CB42 = CB21;
	std::cout << CB42;

	std::cout << std::endl << "/*Form Copy*/" << std::endl;
	Form CB43(CB21);
	std::cout << CB43;


	return 0;
}