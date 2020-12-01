/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:34:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 18:24:42 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) : _name(copy._name), _grade(copy._grade)
{
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	//No Name assignation because it is constant ! 
	this->_grade = rhs._grade;

	return (*this);
}

std::string const	Bureaucrat::getName(void) const
{
	return this->_name;
}

int		Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}

/*class Bureaucrat::GradeTooHighException::what const  : public std::exception {

public:
	virtual const char* what() const trow();
	{
		return ("The grade entered is too high !");
	}
};
class GradeTooLowException : public std::exception {

public:
	virtual const char* what() const trow();
	{
		return ("The grade entered is too low !");
	}
};*/