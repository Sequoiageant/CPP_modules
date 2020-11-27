/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/27 12:02:52 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure created" << std::endl;
}

Cure::Cure(std::string const & type)
{
	std::cout << "Cure created" << std::endl;
}

Cure::Cure(Cure const & copy)
{

}

Cure::~Cure(void)
{
	return;
}

Cure & Cure::operator=(Cure const & rhs)
{

}

Cure* Cure::clone(void) const = 0
{
	return (new Cure);
}

void Cure::use(ICharacter& target)
{

}
