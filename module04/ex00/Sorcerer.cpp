/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:54:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 10:46:56 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer(void)
{
	return;
}

Sorcerer::Sorcerer(std::string const name, std::string const title) : _name(toupperString(name)), _title(toupperString(title))
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & copy)
{
	*this = copy;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const & rhs)
{
	this->_name = rhs._name;
	this->_name = rhs._title;

	return (*this);
}

void Sorcerer::introduce(void) const
{
	std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
}

std::string Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void	Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}


std::string toupperString(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

std::ostream& operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle()<< ", and I like ponies!" << std::endl;

	return (o);
}