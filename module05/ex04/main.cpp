/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:34:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 18:56:39 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
	Intern someRandomIntern;

	std::cout << std::endl << "/*NO ERROR*/" << std::endl;
	try {
		Bureaucrat	bob("bob", 1);
		Bureaucrat	jim("jim", 1);
		Bureaucrat	joe("jim", 150);

		OfficeBlock office;
		office.setIntern(&someRandomIntern);
		office.setSignatory(&bob);
		office.setExecutor(&jim);

		office.doBureaucracy("robotomy request", "Bender"); //"presidential pardon", "robotomy request", "shrubbery creation"
		office.doBureaucracy("presidential pardon", "Bender");
		office.doBureaucracy("shrubbery creation", "Bender");
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "/*Cannot sign*/" << std::endl;
	try {
		Bureaucrat	jim("jim", 1);
		Bureaucrat	joe("joe", 150);

		OfficeBlock office(&someRandomIntern, &joe, &jim);

		office.doBureaucracy("robotomy request", "Bender");		
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "/*Cannot execute*/" << std::endl;
	try {
		Bureaucrat	bob("bob", 1);
		Bureaucrat	joe("joe", 150);

		OfficeBlock office(&someRandomIntern, &bob, &joe);

		office.doBureaucracy("robotomy request", "Bender");		
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "/*Send a null to office constructor*/" << std::endl;
	try {
		Bureaucrat	bob("bob", 1);
		Bureaucrat	jim("jim", 1);

		OfficeBlock office(NULL, &bob, &jim);

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "/*Send a null to a setter*/" << std::endl;
	try {
		Bureaucrat	bob("bob", 1);
		Bureaucrat	jim("jim", 1);

		OfficeBlock office;

		office.setIntern(&someRandomIntern);
		office.setSignatory(&bob);
		office.setExecutor(NULL);
		office.doBureaucracy("robotomy request", "Bender");		

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	return 0;
}