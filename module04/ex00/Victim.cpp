/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:54:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 15:50:36 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Victim.hpp"
#include "Sorcerer.hpp"

Victim::Victim(void)
{
	return;
}

Victim::Victim(std::string const name) : _name(toupperString(name))
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & copy)
{
	*this = copy;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator=(Victim const & rhs)
{
	this->_name = rhs._name;

	return (*this);
}

void Victim::introduce(void) const
{
	std::cout << "I am " << this->_name << ", " << ", and I like otters!" << std::endl;
}

std::string const Victim::getName(void) const
{
	return (this->_name);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I am " << rhs.getName() << ", and I like otters!" << std::endl;

	return (o);
}