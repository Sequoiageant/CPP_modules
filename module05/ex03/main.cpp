/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:34:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 12:41:11 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Bureaucrat	bob("bob", 1);
		std::cout << bob;
	
		Intern someRandomIntern;
		AForm* rrf;
	
	std::cout << std::endl << "/*Intern create form*/" << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;

	std::cout << std::endl << "/*Intern doesn't know form*/" << std::endl;
		rrf = someRandomIntern.makeForm("unknowm form", "Bender");
		std::cout << *rrf;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	return 0;
}