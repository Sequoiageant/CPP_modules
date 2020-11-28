/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/28 16:51:15 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const name) : _name(name), _inv(), _nbMateria(0)
{
	std::cout << "A Character was born" << std::endl;
	return;
}

Character::Character(Character const & copy)
{
	for (int i = 0; i < 4; ++i)
	{
		if (copy._inv[i])
			this->_inv[i] = copy._inv[i]->clone();
		else
			this->_inv[i] = NULL;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < this->_nbMateria; ++i)
	{
		delete this->_inv[i];
		this->_inv[i] = NULL;
	}
}

Character & Character::operator=(Character const & rhs)
{
	/*Delete old Materia*/
	for (int i = 0; i < this->_nbMateria; ++i)
	{
		delete this->_inv[i];
		this->_inv[i] = NULL;
	}

	/*copy new Materia*/
	for (int i = 0; i < 4; ++i)
	{
		if (rhs._inv[i])
			this->_inv[i] = rhs._inv[i]->clone();
		else
			this->_inv[i] = NULL;
	}

	return (*this);
}


std::string const & Character::getName(void) const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	this->_inv[this->_nbMateria] = m;
	std::cout << "character " << this->_name << " is equipped with " << m->getType() << " in idx " << this->_nbMateria << std::endl;
	this->_nbMateria++;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_nbMateria)
	{
		if (this->_inv[idx])
		{
			delete this->_inv[idx]; // mmhhh delete OR not
			this->_inv[idx] = NULL;
		}

		for (int i = idx; i < this->_nbMateria - 1; ++i)
		{
			this->_inv[i] = this->_inv[i + 1];
		}
		this->_inv[_nbMateria - 1] = NULL;
		this->_nbMateria--;
	}
	else
		std::cerr << "The inventory index " << idx << " is not equipped" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->_nbMateria)
		this->_inv[idx]->use(target);
	else
		std::cerr << "The materia at index " << idx << " cannot be used" << std::endl;
}

void Character::displayInv(void) const
{
	std::cout << "Character " << this->getName() << " inventory: " << std::endl;
	for (int i = 0; i < this->_nbMateria; ++i)
	{
		std::cout << "inv[" << i <<"]: " << this->_inv[i]->getType() << " with xp = " << this->_inv[i]->getXP() <<std::endl;
	}
}

AMateria* Character::getInv(int idx) const
{
	return this->_inv[idx];
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	o << "Character " << rhs.getName() << " inventory: " << std::endl
	<< "inv[0] :" << rhs.getInv(0)->getType() << std::endl
	<< "inv[1] :" << rhs.getInv(1)->getType() << std::endl
	<< "inv[2] :" << rhs.getInv(2)->getType() << std::endl
	<< "inv[3] :" << rhs.getInv(3)->getType() << std::endl;
	return o;
}
