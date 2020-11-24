/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/12 15:02:23 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib> // rand()

FragTrap::FragTrap() : ClapTrap("no name", 100, 100, 100, 100, 1, 30, 20, 5)
{
	srand(time(NULL));
	std::cout << "FragTrap Default constructor called, " << this->_name
	<< " says: \"Bacon is for sycophants and products of incest\"" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	srand(time(NULL));
	std::cout << "FragTrap Overload constructor called, " << this->_name
	<< " says: \"MY PECS HAVE PECS\"" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy)
{
	*this = copy;
	std::cout << "FragTrap Copy constructor called, " << this->_name
	<< " says: \"HEYOO!!!!!!!\"" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called, " << this->_name << " died with honors" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "FragTrap Assignement operator called" << std::endl;
    ClapTrap::operator=(rhs);
 
    return(*this);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "I am the FragTrap " << this->_name
	<< " but i am using the ClapTrap meleeAttack " << std::endl;
	ClapTrap::rangedAttack(target);
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "I am the FragTrap " << this->_name
	<< " but i am using the ClapTrap meleeAttack " << std::endl;
	ClapTrap::meleeAttack(target);
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
