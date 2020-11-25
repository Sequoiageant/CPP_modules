/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/25 09:58:24 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	// std::cout << "Enemy with type " << this->_type << " was born!" << std::endl;
	return;
}

Enemy::Enemy(Enemy const & copy)
{
	*this = copy;
}

Enemy::~Enemy(void)
{
	return;
}

Enemy& Enemy::operator=(Enemy const & rhs)
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;

	return (*this);
}

std::string const	Enemy::getType(void) const
{
	return this->_type;
}

int					Enemy::getHP(void) const
{
	return this->_hp;
}

void		Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		if (this->_hp - damage > 0)
			this->_hp -= damage;
		else
			this->_hp = 0;
		std::cout << "The Enemy of type " << this->_type
		<< " has taken " << damage << " HP of damage! Remaining["
		<< this->getHP() << "]" << std::endl;
	}
	else
		std::cout << "Given damage must be positive" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Enemy const & rhs)
{
	std::cout << "I am an Enemy of type " << rhs.getType()
	<< " and I have " << rhs.getHP() << " HP" << std::endl;
	return o;
}
