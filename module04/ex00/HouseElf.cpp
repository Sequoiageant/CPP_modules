/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HouseElf.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:54:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 13:52:35 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Victim.hpp"
#include "HouseElf.hpp"
#include "Sorcerer.hpp"

HouseElf::HouseElf(std::string const name) : Victim(name)
{
	std::cout << "Fiiiizzzzz" << std::endl;
}

HouseElf::HouseElf(HouseElf const & copy)
{
	*this = copy;
}

HouseElf::~HouseElf(void)
{
	std::cout << "dddddead..." << std::endl;
}

HouseElf& HouseElf::operator=(HouseElf const & rhs)
{
	this->_name = rhs._name;

	return (*this);
}

void HouseElf::introduce(void) const
{
	std::cout << "I am " << this->_name << ", " << ", and I like cats!" << std::endl;
}

std::string HouseElf::getName(void) const
{
	return (this->_name);
}

void	HouseElf::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::ostream& operator<<(std::ostream & o, HouseElf const & rhs)
{
	o << "I am " << rhs.getName() << ", and I like cats!" << std::endl;

	return (o);
}