/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:44:04 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/02 16:42:30 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : 
AForm("PresidentialPardonForm", 25, 5, target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) :
AForm(copy)
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

void	  PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & rhs)
{
	o << rhs.getName()
	<< " (SignGrade " << rhs.getSignGrade()
	<< ", ExecGrade " << rhs.getExecGrade()
	<< ", Target " << rhs.getTarget();

	if (rhs.getRatification())
		o << ", Signed)" << std::endl;
	else
		o << ", Unsigned)" << std::endl;
	return o;
}
