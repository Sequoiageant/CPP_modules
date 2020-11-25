/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:54:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 15:03:05 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"

Peon::Peon(std::string const name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & copy)
{
	*this = copy;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=(Peon const & rhs)
{
	this->_name = rhs._name;

	return (*this);
}

void Peon::introduce(void) const
{
	std::cout << "I am " << this->_name << ", " << ", and I like otters!" << std::endl;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::ostream& operator<<(std::ostream & o, Peon const & rhs)
{
	o << "I am " << rhs.getName() << ", and I like otters!" << std::endl;

	return (o);
}