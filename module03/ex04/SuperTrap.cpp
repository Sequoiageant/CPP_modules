/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 14:50:56 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

SuperTrap::SuperTrap(std::string name)
{
	srand(time(NULL));
	this->_name = name;
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_level = 1;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "SuperTrap Overload constructor called, " << this->_name << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & copy)
{
	*this = copy;
	// std::cout << "SuperTrap Copy constructor called, " << this->_name << std::endl;
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

void SuperTrap::introduction(void) const
{
	std::cout << "I am a SuperTrap, Who am I in details: " << std::endl;
	ClapTrap::introduction();
}
