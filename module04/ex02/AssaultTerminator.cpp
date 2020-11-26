/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/25 16:00:31 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & copy)
{
	*this = copy;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	return (*this);
}

ISpaceMarine* AssaultTerminator::clone(void) const
{
	ISpaceMarine* clone = new AssaultTerminator(*this);
	return clone;
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}
