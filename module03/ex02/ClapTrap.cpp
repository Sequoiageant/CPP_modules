/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/11 18:42:12 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib> // rand()

ClapTrap::ClapTrap() : _name("no name"), _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1), _melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5)
{
	// srand(time(NULL));
	std::cout << "ClapTrap Default constructor called, " << this->_name
	<< " says: \"Bacon is for sycophants and products of incest\"" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1), _melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5)
{
	srand(time(NULL));
	std::cout << "ClapTrap Overload constructor called, " << this->_name
	<< " says: \"MY PECS HAVE PECS\"" << std::endl;
}

ClapTrap::	ClapTrap(std::string name, unsigned int hp, unsigned int max_hp, unsigned int ep, unsigned int max_ep, unsigned int level, unsigned int mad, unsigned int rad, unsigned int adr)
 : _name(name), _hit_points(hp), _max_hit_points(max_hp), _energy_points(ep), _max_energy_points(max_ep), _level(level), _melee_attack_damage(mad), _ranged_attack_damage(rad), _armor_damage_reduction(adr)
{
	srand(time(NULL));
	std::cout << "ClapTrap Overload constructor called, " << this->_name
	<< " says: \"MY PECS HAVE PECS\"" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	*this = copy;
	std::cout << "ClapTrap Copy constructor called, " << this->_name
	<< " says: \"HEYOO!!!!!!!\"" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Clatrap Destructor called, " << this->_name << " died with honors" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_max_hit_points = rhs._max_hit_points;
	this->_energy_points = rhs._energy_points;
	this->_max_energy_points = rhs._max_energy_points;
	this->_level = rhs._level;
	this->_melee_attack_damage = rhs._melee_attack_damage;
	this->_ranged_attack_damage = rhs._ranged_attack_damage;
	this->_armor_damage_reduction = rhs._armor_damage_reduction;

	return (*this);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
	<< " at range, causing " << this->_ranged_attack_damage
	<< " points of damages!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
	<< " at melee, causing " << this->_ranged_attack_damage
	<< " points of damages!"<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hit_points + this->_armor_damage_reduction)
	{
		this->_hit_points = 0;
	}
	else if (amount <= this->_armor_damage_reduction)
	{
		amount = 0;
	}
	else
	{
		amount -= this->_armor_damage_reduction;
		this->_hit_points -= amount;
	}
	std::cout << "FR4G-TP " << this->_name << " takes "
	<< amount << " points of damages! Remaining hit points: "
	<< this->_hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points + amount <= this->_max_hit_points)
	{
		this->_hit_points += amount;
		std::cout << "FR4G-TP " << this->_name << " get " << amount
		<< " hit points, total hit points: " << this->_hit_points << std::endl;
	}
	else
	{
		this->_hit_points = this->_max_hit_points;
		std::cout << "FR4G-TP " << this->_name
		<< " get full hit points: " << this->_max_hit_points << std::endl;
	}
}
