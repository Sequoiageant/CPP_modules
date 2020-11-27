/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/27 11:53:21 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria created" << std::endl;
}

AMateria::~AMateria(void)
{
	return;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{

}

std::string const & AMateria::getType(void) const
{
	return this->_type;
}

unsigned int AMateria::getXP(void) const
{
	return this->_xp
}

void AMateria::use(ICharacter& target)
{

}
