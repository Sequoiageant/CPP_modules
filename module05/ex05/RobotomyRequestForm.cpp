/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:44:04 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 17:54:22 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : 
AForm("RobotomyRequestForm", 72, 45, target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) :
AForm(copy)
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

void	  RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::cout << executor.getName() << " Makes some drilling noises, and " << this->getTarget()
	<< " has been robotomized successfully 50% of the time." << std::endl;
}

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & rhs)
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
