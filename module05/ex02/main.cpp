/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:34:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 11:14:01 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try {
		Bureaucrat	bob("bob", 1);	 // can sign and execute all forms
		Bureaucrat	jim("jim", 150); // cannot sign and execute all forms

		PresidentialPardonForm PardonForm("henry");
		RobotomyRequestForm RequestForm("roger");
		ShrubberyCreationForm Shrubbery("michel");
		ShrubberyCreationForm Shrubbery2("herve");
		bob.signForm(Shrubbery2);

		std::cout << bob;
		std::cout << jim;

		std::cout << PardonForm;
		std::cout << RequestForm;
		std::cout << Shrubbery;

	std::cout << std::endl << "/*Assignation of a form (only signing state)*/" << std::endl;
		std::cout << Shrubbery2;
		Shrubbery2 = Shrubbery; // Shrubbery2 will go from signed --> unsigned
		std::cout << Shrubbery2;

	std::cout << std::endl << "/*PresidentialPardonForm not signed*/" << std::endl;
		bob.executeForm(PardonForm);

	std::cout << std::endl << "/*PresidentialPardonForm can be executed*/" << std::endl;
		bob.signForm(PardonForm);
		bob.executeForm(PardonForm);

	std::cout << std::endl << "/*PresidentialPardonForm cannot be executed*/" << std::endl;
		jim.signForm(PardonForm);
		jim.executeForm(PardonForm);

	std::cout << std::endl << "/*RobotomyRequestForm can be executed*/" << std::endl;
		bob.signForm(RequestForm);
		bob.executeForm(RequestForm);

	std::cout << std::endl << "/*RobotomyRequestForm cannnot be executed*/" << std::endl;
		jim.signForm(RequestForm);
		jim.executeForm(RequestForm);

	std::cout << std::endl << "/*ShrubberyCreationForm can be executed*/" << std::endl;
		bob.signForm(Shrubbery);	/* Modify the rights on "michel_shrubbery" file to test iostrem error */
		bob.executeForm(Shrubbery);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	return 0;
}