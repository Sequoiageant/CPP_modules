/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/12 15:58:54 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib> // rand()

SuperTrap::SuperTrap() : ClapTrap("no name", 100, 100, 120, 120, 1, 60, 20, 5)
{
	srand(time(NULL));
	std::cout << "SuperTrap Default constructor called, " << this->_name << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5)
{
	srand(time(NULL));
	std::cout << "SuperTrap Overload constructor called, " << this->_name << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & copy)
{
	*this = copy;
	std::cout << "SuperTrap Copy constructor called, " << this->_name << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap Destructor called, " << this->_name << " died with honors" << std::endl;
}

SuperTrap& SuperTrap::operator=(SuperTrap const & rhs)
{
    std::cout << "SuperTrap Assignement operator called" << std::endl;
    ClapTrap::operator=(rhs);

    return(*this);
}

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
