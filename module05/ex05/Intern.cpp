/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:17:51 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 12:28:35 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return;
}

Intern::Intern(Intern const & copy)
{
	*this = copy;
}

Intern::~Intern(void)
{
	return;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

AForm* Intern::makeForm(std::string const & type, std::string const & target) const
{
	static std::string const forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm* (Intern::*fill[3])(std::string const &) const = {&Intern::_fillPardonForm, &Intern::_fillRequestForm, &Intern::_fillShrubbery};

	for (int i = 0; i < 3; ++i)
	{
		if (type == forms[i])
		{
			std::cout << "Intern creates " << forms[i] << std::endl;
			return (this->*fill[i])(target);
		}
	}
	throw FormNotFound();
	return NULL;
}

AForm* Intern::_fillPardonForm(std::string const & target) const
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::_fillRequestForm(std::string const & target) const
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::_fillShrubbery(std::string const & target) const
{
	return new ShrubberyCreationForm(target);
}

