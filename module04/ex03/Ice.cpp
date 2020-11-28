/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/28 16:07:43 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice created" << std::endl;
}

Ice::Ice(Ice const & copy) : AMateria(copy)
{
	std::cout << "Ice by copy created" << std::endl;
}

Ice::~Ice(void)
{
	return;
}

Ice & Ice::operator=(Ice const & rhs)
{
	AMateria::operator=(rhs);

	return (*this);
}

Ice* Ice::clone(void) const
{
	Ice* clone = new Ice(*this);
	// *clone = *this;
	return (clone);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
}
