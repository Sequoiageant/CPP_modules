/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 17:48:07 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _APCost(apcost), _damage(damage)
{
	// std::cout << "Weapon " << this->_name << ", " << this->_APCost << " ," << this->_damage << " created." << std::endl;
	return;
}

AWeapon::AWeapon(AWeapon const & copy)
{
	*this = copy;
}

AWeapon::~AWeapon(void)
{
	// std::cout << "Weapon deleted" << std::endl;
	return;
}

AWeapon& AWeapon::operator=(AWeapon const & rhs)
{
	this->_name = rhs._name;
	this->_name = rhs._APCost;
	this->_name = rhs._damage;

	return (*this);
}

std::string const AWeapon::getName(void) const
{
	return this->_name;
}

int AWeapon::getAPCost(void) const
{
	return this->_APCost;
}

int AWeapon::getDamage(void) const
{
	return this->_damage;
}

std::ostream& operator<<(std::ostream & o, AWeapon const & rhs)
{
	o << "Weapon: " << rhs.getName() << ", I cost " << rhs.getAPCost()
	<< " and I give " << rhs.getDamage() << " damages!" << std::endl;

	return (o);
}