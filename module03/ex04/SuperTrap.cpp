/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 10:47:28 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "SuperTrap.hpp"
// #include "NinjaTrap.hpp"
// #include "FragTrap.hpp"
// #include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib> // rand()

SuperTrap::SuperTrap(void)
{
	srand(time(NULL));
	this->_name = "no name";
	// this->_hit_points = 100;
	// this->_max_hit_points = 100;
	// this->_energy_points = 120;
	// this->_max_energy_points = 1220;
	this->_level = 1;
	// this->_melee_attack_damage = 60;
	// this->_ranged_attack_damage = 20;
	// this->_armor_damage_reduction = 5;
	// std::cout << "SuperTrap Default constructor called, " << this->_name << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	srand(time(NULL));
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_max_hit_points = FragTrap::_max_hit_points;
	this->_energy_points = NinjaTrap::_energy_points;
	this->_max_energy_points = NinjaTrap::_max_energy_points;
	this->_level = 1;
	this->_melee_attack_damage = NinjaTrap::_melee_attack_damage;
	this->_ranged_attack_damage = FragTrap::_ranged_attack_damage;
	this->_armor_damage_reduction = FragTrap::_armor_damage_reduction;
	std::cout << "SuperTrap Overload constructor called, " << this->_name << std::endl;

}

SuperTrap::SuperTrap(SuperTrap const & copy)
{
	*this = copy;
	// std::cout << "SuperTrap Copy constructor called, " << this->_name << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	// std::cout << "SuperTrap Destructor called, " << this->_name << " died with honors" << std::endl;
}

SuperTrap& SuperTrap::operator=(SuperTrap const & rhs)
{
    std::cout << "SuperTrap Assignement operator called" << std::endl;
    ClapTrap::operator=(rhs);

    return(*this);
}
/*
void	SuperTrap::rangedAttack(std::string const & target)
{
	std::cout << "I am the SuperTrap " << this->_name
	<< " but i am using the NinjaTrap meleeAttack " << std::endl;
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	std::cout << "I am the SuperTrap " << this->_name
	<< " but i am using the NinjaTrap meleeAttack " << std::endl;
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::ninjaShoebox(SuperTrap & clap) const
{
	std::cout << "FR4G-TP " << this->_name
	<< " says: \"" << clap.getName() << ", I will do like the Following NinjaTrap\"" << std::endl;	
}

void	SuperTrap::ninjaShoebox(FragTrap & clap) const
{
	std::cout << "FR4G-TP " << this->_name
	<< " says: \"" << clap.getName() << ", I will do like the Following NinjaTrap\"" << std::endl;	
	NinjaTrap::ninjaShoebox(clap);
}

void	SuperTrap::ninjaShoebox(ScavTrap & clap) const
{
	std::cout << "FR4G-TP " << this->_name
	<< " says: \"" << clap.getName() << ", I will do like the Following NinjaTrap\"" << std::endl;	
	NinjaTrap::ninjaShoebox(clap);
}

void	SuperTrap::ninjaShoebox(ClapTrap & clap) const
{
	std::cout << "FR4G-TP " << this->_name
	<< " says: \"" << clap.getName() << ", I will do like the Following NinjaTrap\"" << std::endl;	
	NinjaTrap::ninjaShoebox(clap);
}

void	SuperTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name
	<< " says: I will do like the Following FragTrap\"" << std::endl;	
	FragTrap::vaulthunter_dot_exe(target);
}

void SuperTrap::introduction(void) const
{
	std::cout << "I am a SuperTrap, Who am I in details: " << std::endl
	<< "name: " << this->_name << std::endl
	<< "hit_points: " << this->_hit_points << std::endl
	<< "max_hit_points: " << this->_max_hit_points << std::endl
	<< "energy_points: " << this->_energy_points << std::endl
	<< "max_energy_points: " << this->_max_energy_points << std::endl
	<< "level: " << this->_level << std::endl
	<< "melee_attack_damage: " << this->_melee_attack_damage << std::endl
	<< "ranged_attack_damage: " << this->_ranged_attack_damage << std::endl
	<< "armor_damage_reduction: " << this->_armor_damage_reduction << std::endl
	<< std::endl;
}
*/