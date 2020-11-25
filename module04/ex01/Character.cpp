/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/25 10:37:17 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"

Character::Character(void) : _name("No Name"), _AP(40), _weapon(NULL)
{
	// std::cout << "Character " << this->_name << " was born!" << std::endl;
}

Character::Character(std::string const & name) : _name(name), _AP(40), _weapon(NULL)
{
	// std::cout << "Character " << this->_name << " was born!" << std::endl;
}

Character::Character(Character const & copy)
{
	*this = copy;
}

Character::~Character(void)
{
	std::cout << "Character " << this->_name << " died after terrible suffering." << std::endl;
}

Character& Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	this->_AP = rhs._AP;
	this->_weapon = rhs._weapon;

	return (*this);
}

void Character::recoverAP(void)
{
	if (this->_AP + 10 < 40)
	{
		this->_AP += 10;
		std::cout << "Character " << this->_name << " recovered 10 AP. Total[" << this->_AP << "]" << std::endl;		
	}
	else
	{
		this->_AP = 40;
		std::cout << "Character " << this->_name << " if full AP. Total[" << this->_AP << "]" << std::endl;
	}
}

void Character::equip(AWeapon* weapon)
{
	if (weapon)
	{
		this->_weapon = weapon;
		std::cout << this->_name << " has been equipped with the weapon " << weapon->getName() << std::endl;
	}
	else
		std::cout << "A character cannot be equipped with a NULL Weapon !" << std::endl;
}

void Character::attack(Enemy* enemy)
{
	if (this->_weapon)
	{
		if (this->_AP >= this->_weapon->getAPCost())
		{
			std::cout << this->_name << " has attack " << enemy->getType()
			<< " with a " << this->_weapon->getName() << std::endl;			
			this->_weapon->attack();
			this->_AP -= this->_weapon->getAPCost();
			enemy->takeDamage(this->_weapon->getDamage());
			if (enemy->getHP() <= 0)
        		delete enemy;
		}
		else
			std::cout << this->_name << " has not enough AP to attak." << std::endl;
	}
	else
		std::cout << this->_name << " is not equipped with a weapon and cannot attack " << enemy->getType() << std::endl;
}

std::string const Character::getName(void) const
{
	return this->_name;
}

int Character::getAP(void) const
{
	return this->_AP;
}

AWeapon* Character::getWeapon(void) const
{
	return this->_weapon;
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.getWeapon())
		std::cout << rhs.getName() << " has " << rhs.getAP()
		<< " AP and carries " << rhs.getWeapon()->getName() << std::endl;
	else
		std::cout << rhs.getName() << " has " << rhs.getAP()
		<< " AP and is unarmed" << std::endl;		
	return o;
}
