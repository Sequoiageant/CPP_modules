/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/25 09:58:34 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Enemy.hpp"
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(int hp, std::string const & type) : Enemy(hp, type)
{
	std::cout << "SuperMutant with type " << this->_type << " was born!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & copy) : Enemy(copy)
{
	*this = copy;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant& SuperMutant::operator=(SuperMutant const & rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

void		SuperMutant::takeDamage(int damage)
{
	if (damage > 0)
	{
		if (this->_hp - (damage - 3) > 0)
			this->_hp -= (damage - 3);
		else
			this->_hp = 0;
		std::cout << "The Enemy of type " << this->_type
		<< " has taken " << damage - 3 << " HP of damage! Remaining["
		<< this->getHP() << "]" << std::endl;
	}
	else
		std::cout << "Given damage must be positive" << std::endl;
}
