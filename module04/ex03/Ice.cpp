/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/27 12:02:33 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice created" << std::endl;
}

Ice::Ice(std::string const & type)
{
	std::cout << "Ice created" << std::endl;
}

Ice::Ice(Ice const & copy)
{

}

Ice::~Ice(void)
{
	return;
}

Ice & Ice::operator=(Ice const & rhs)
{

}

Ice* Ice::clone(void) const = 0
{
	return (new Ice);
}

void Ice::use(ICharacter& target)
{

}
