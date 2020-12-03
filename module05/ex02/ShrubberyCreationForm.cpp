/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:44:04 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 10:46:07 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : 
AForm("ShrubberyCreationForm", 145, 137, target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) :
AForm(copy)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

std::string const ShrubberyCreationForm::getTree(void) const
{
	return this->_tree;
}

static std::string const tree = "\
         v\n\
        >X<\n\
         A\n\
        d$b\n\
      .d\\$$b.\n\
    .d$i$$\\$$b.\n\
       d$$@b\n\
      d\\$$$ib\n\
    .d$$$\\$$$b\n\
  .d$$@$$$$\\$$ib.\n\
      d$$i$$b\n\
     d\\$$$$@$b\n\
  .d$@$$\\$$$$$@b.\n\
.d$$$$i$$$\\$$$$$$b.\n\
        ###\n\
        ###\n\
        ### mh\n";

void	  ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::ofstream	ofs;
	std::string const filename = this->getTarget() + "_shrubbery";
	ofs.open(filename.c_str(), std::ifstream::out | std::ifstream::trunc);
	if (ofs.fail())
		throw std::ios::failure("on file "+filename);
	ofs << tree;
	ofs.close();
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
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
