/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/10 19:27:04 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib> // rand()

FragTrap::FragTrap() : _name("no name"), _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1), _melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5)
{
	// srand(time(NULL));
	std::cout << "Default constructor called, " << this->_name
	<< " says: \"Bacon is for sycophants and products of incest\"" << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1), _melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5)
{
	// srand(time(NULL));
	std::cout << "Overload constructor called, " << this->_name
	<< " says: \"MY PECS HAVE PECS\"" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy)
{
	*this = copy;
	std::cout << "Copy constructor called, " << this->_name
	<< " says: \"HEYOO!!!!!!!\"" << std::endl;
}

FragTrap::~FragTrap(void)
{

}

FragTrap& FragTrap::operator=(FragTrap const & rhs)
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
	<< " at range, causing " << this->_ranged_attack_damage
	<< " points of damages!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
	<< " at melee, causing " << this->_ranged_attack_damage
	<< " points of damages!"<< std::endl;
}

void	FragTrap::funnyAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name
	<< " tries a funnyAttack on " << target
	<< " : I ONLY HAVE 1 QUESTION FOR YOU. EXPLOSIONS?" << std::endl;
}

void	FragTrap::sleepingAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name
	<< " was dreaming deeply so he tries a sleepingAttack on " << target
	<< " : BURN ALL THE BABIES!" << std::endl;
}

void	FragTrap::crapyAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name
	<< " was dreaming deeply so he tries a crapyAttack on " << target
	<< " : THIS PLANET SMELLS LIKE HEMMORROIDS WRAPPED IN BACON!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	typedef	void		(FragTrap::*t_attack)(std::string const &);
	static std::string	attacks[5] = {"meleeAttack", "rangedAttack", "funnyAttack", "sleepingAttack", "crapyAttack"};
	static t_attack		func[5] = {&FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::funnyAttack, &FragTrap::sleepingAttack, &FragTrap::sleepingAttack};

	if (this->_energy_points < 25)
	{
		std::cout << "FR4G-TP " << this->_name
		<< ": not enough Energie to launch a FUNNY ATTACK..." << std::endl;
	}
	else
	{
		(this->*func[rand() % 5])(target);
		this->_energy_points -= 25;
		std::cout << "FR4G-TP " << this->_name
		<< ": -25 points of Energy, remaining: " << this->_energy_points << std::endl;	
	}
}
