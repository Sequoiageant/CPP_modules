/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/25 10:04:31 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
	// std::cout << "PlasmaRifle " << this->_name << ", " << this->_APCost << ", " << this->_damage << " created." << std::endl;
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
	// std::cout << "PlasmaRifle " << this->_name << ", " << this->_APCost << ", " << this->_damage << " created." << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy) : AWeapon(copy)
{
	*this = copy;
}

PlasmaRifle::~PlasmaRifle(void)
{
	std::cout << this->_name << " deleted" << std::endl;
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

std::ostream& operator<<(std::ostream & o, PlasmaRifle const & rhs)
{
	o << "PlasmaRifle " << rhs.getName() << ", I cost " << rhs.getAPCost()
	<< " and I give " << rhs.getDamage() << " damages!" << std::endl;

	return (o);
}
