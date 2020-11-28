/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/28 11:48:36 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure created" << std::endl;
}

Cure::Cure(Cure const & copy) : AMateria(copy)
{
	std::cout << "Cure by copy created" << std::endl;
}

Cure::~Cure(void)
{
	return;
}

Cure & Cure::operator=(Cure const & rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

Cure* Cure::clone(void) const
{
	Cure* clone = new Cure;
	*clone = *this;
	return (clone);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
}
