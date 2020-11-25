/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 19:38:04 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	// std::cout << "PowerFist " << this->_name << ", " << this->_APCost << ", " << this->_damage << " created." << std::endl;
}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
	// std::cout << "PowerFist " << this->_name << ", " << this->_APCost << ", " << this->_damage << " created." << std::endl;
}

PowerFist::PowerFist(PowerFist const & copy) : AWeapon(copy)
{
	*this = copy;
}

PowerFist::~PowerFist(void)
{
	std::cout << this->_name << " deleted" << std::endl;
}

PowerFist& PowerFist::operator=(PowerFist const & rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout <<  "* pschhh... SBAM ! *" << std::endl;
}

std::ostream& operator<<(std::ostream & o, PowerFist const & rhs)
{
	o << "PowerFist " << rhs.getName() << ", I cost " << rhs.getAPCost()
	<< " and I give " << rhs.getDamage() << " damages!" << std::endl;

	return (o);
}
