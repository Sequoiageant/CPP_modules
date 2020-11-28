/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/28 16:11:26 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
	std::cout << "AMateria created" << std::endl;
}

AMateria::AMateria(AMateria const & copy) : _type(copy._type), _xp(copy._xp)
{
	return;
}

AMateria::~AMateria(void)
{
	return;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	this->_xp = rhs._xp;
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return this->_type;
}

unsigned int AMateria::getXP(void) const
{
	return this->_xp;
}

void AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
