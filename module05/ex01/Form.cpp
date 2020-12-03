/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:29:43 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/02 11:27:47 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : 
_name(name), _ratified(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & copy) :
_name(copy._name), _ratified(copy._ratified), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	return;
}

Form::~Form(void)
{
	return;
}

std::string	const Form::getName(void) const
{
	return this->_name;
}

bool	Form::getRatification(void) const
{
	return this->_ratified;
}

int	 	Form::getSignGrade(void) const
{
	return this->_signGrade;
}

int	 	Form::getExecGrade(void) const
{
	return this->_execGrade;
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_ratified = true;
}

Form & Form::operator=(Form const & rhs)
{
	this->_ratified = rhs.getRatification();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName()
	<< " (SignGrade " << rhs.getSignGrade()
	<< ", ExecGrade " << rhs.getExecGrade();

	if (rhs.getRatification())
		o << ", Signed)" << std::endl;
	else
		o << ", Unsigned)" << std::endl;
	return o;
}
