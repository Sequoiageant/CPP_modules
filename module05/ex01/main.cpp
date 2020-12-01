/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:34:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 19:47:02 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "/*Grade too Low*/" << std::endl;

	Form CB28("CB28", 3, 3);

	try {
		Bureaucrat bob("bob", 5);
		bob.signForm(&CB28);
		std::cout << bob; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat jim("jim", 3);
		jim.signForm(&CB28);
		std::cout << jim; 
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Form CB28("CB28", 0, 3);
		std::cout << CB28;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}