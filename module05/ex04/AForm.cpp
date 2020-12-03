/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:29:43 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 12:33:06 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string const & name, int const signGrade, int const execGrade, std::string const & target) :
_name(name), _ratified(false), _signGrade(signGrade), _execGrade(execGrade), _target(target)
{
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & copy) :
_name(copy._name), _ratified(copy._ratified), _signGrade(copy._signGrade), _execGrade(copy._execGrade), _target(copy._target)
{
	return;
}

AForm::~AForm(void)
{
	return;
}

std::string	const AForm::getName(void) const
{
	return this->_name;
}

bool	AForm::getRatification(void) const
{
	return this->_ratified;
}

int	 	AForm::getSignGrade(void) const
{
	return this->_signGrade;
}

int	 	AForm::getExecGrade(void) const
{
	return this->_execGrade;
}

std::string	const AForm::getTarget(void) const
{
	return this->_target;
}

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	else
		this->_ratified = true;
}

void	  AForm::execute(Bureaucrat const & executor) const
{
	if (this->_ratified)
	{
		if (executor.getGrade() > this->_execGrade)
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::FormNotSignedException();
}

AForm & AForm::operator=(AForm const & rhs)
{
	this->_ratified = rhs.getRatification();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs)
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
