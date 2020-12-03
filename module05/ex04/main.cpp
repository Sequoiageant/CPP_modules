/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:34:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 18:29:41 by julnolle         ###   ########.fr       */
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
	try {
		Bureaucrat	bob("bob", 1);
		Bureaucrat	jim("jim", 1);
		// std::cout << bob;
	
		Intern someRandomIntern;
	
		// OfficeBlock office(&someRandomIntern, &bob, &jim);
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

	return 0;
}