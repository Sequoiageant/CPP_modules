/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:47:42 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 18:35:04 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) :
_intern(NULL), _signatory(NULL), _executor(NULL), _form(NULL)
{
	return;
}

OfficeBlock::OfficeBlock(Intern* intern, Bureaucrat* signatory, Bureaucrat* executor) :
_intern(intern), _signatory(signatory), _executor(executor), _form(NULL)
{
	if (!intern)
		throw NullPointerException("First parameter (Intern)");
	if (!signatory)
		throw NullPointerException("2nd parameter (Bureaucrat)");
	if (!executor)
		throw NullPointerException("3rd parameter (Bureaucrat)");
	return;
}

OfficeBlock::~OfficeBlock(void)
{
	return;
}

void OfficeBlock::setIntern(Intern *intern)
{
	this->_intern = intern;
}

void OfficeBlock::setSignatory(Bureaucrat *signatory)
{
	this->_signatory = signatory;
}

void OfficeBlock::setExecutor(Bureaucrat *executor)
{
	this->_executor = executor;
}

void OfficeBlock::doBureaucracy(std::string const & type, std::string const & target)
{
	if (!this->_intern)
		throw NullPointerException("The Intern");
	if (!this->_signatory)
		throw NullPointerException("The Signatory");
	if (!this->_executor)
		throw NullPointerException("The Executor");
	this->_form = this->_intern->makeForm(type, target);
	this->_signatory->signForm(*this->_form);
	this->_executor->executeForm(*this->_form);
	delete this->_form;
}

OfficeBlock::NullPointerException::NullPointerException(std::string const name) :
_msg(name + " cannot be a NULL pointer !")
{
	return;
}

const char* OfficeBlock::NullPointerException::what() const throw()
{
	return (this->_msg.c_str());
}
