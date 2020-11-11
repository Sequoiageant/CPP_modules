/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/11 16:27:28 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib> // rand()

ScavTrap::ScavTrap() : _name("no name"), _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3)
{
	// srand(time(NULL));
	std::cout << "Default constructor called, " << this->_name
	<< " says: \"Bacon is for sycophants and products of incest\"" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3)
{
	srand(time(NULL));
	std::cout << "Overload constructor called, " << this->_name
	<< " says: \"I'M A SCAVTRAP\"" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
	*this = copy;
	std::cout << "Copy constructor called, " << this->_name
	<< " says: \"OUPS, I'M JUST A COPY OF SCAVTRAP\"" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called, " << this->_name << " died with honors" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & rhs)
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
	<< " at range, causing " << this->_ranged_attack_damage
	<< " points of damages!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
	<< " at melee, causing " << this->_ranged_attack_damage
	<< " points of damages!"<< std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::challengeNewcomer(void) const
{
	static std::string	challenges[5] = {"meleeAttack", "rangedAttack", "funnyAttack", "sleepingAttack", "crapyAttack"};

	std::cout << "FR4G-TP " << this->_name
	<< " offers: And the challenge is.... " << challenges[rand() % 5] << " !" << std::endl;	
}
