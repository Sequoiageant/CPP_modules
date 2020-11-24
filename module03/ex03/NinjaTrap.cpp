/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/12 13:12:45 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib> // rand()

NinjaTrap::NinjaTrap() : ClapTrap("no name", 60, 60, 120, 120, 1, 60, 5, 0)
{
	srand(time(NULL));
	std::cout << "NinjaTrap Default constructor called, " << this->_name
	<< " says: \"Bacon is for sycophants and products of incest\"" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	srand(time(NULL));
	std::cout << "NinjaTrap Overload constructor called, " << this->_name
	<< " says: \"I'M A NinjaTrap\"" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & copy)
{
	*this = copy;
	std::cout << "NinjaTrap Copy constructor called, " << this->_name
	<< " says: \"OUPS, I'M JUST A COPY OF NinjaTrap\"" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap Destructor called, " << this->_name << " died with honors" << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const & rhs)
{
    std::cout << "NinjaTrap Assignement operator called" << std::endl;
    ClapTrap::operator=(rhs);

    return(*this);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & clap) const
{
	std::cout << "FR4G-TP " << this->_name
	<< " says: \"" << clap.getName() << ", I give you some life !\"" << std::endl;	
	clap.beRepaired(20);
}

void	NinjaTrap::ninjaShoebox(FragTrap & clap) const
{
	std::cout << "FR4G-TP " << this->_name
	<< " says: \"" << clap.getName() << ", I am ready to receive your vaulthunter_dot_exe..\"" << std::endl;	
	clap.vaulthunter_dot_exe(this->_name);
}

void	NinjaTrap::ninjaShoebox(ScavTrap & clap) const
{
	std::cout << "FR4G-TP " << this->_name
	<< " says: \"" << clap.getName() << ", I want you to give me 5 challenges !\"" << std::endl;	
	clap.challengeNewcomer();

}

void	NinjaTrap::ninjaShoebox(ClapTrap & clap) const
{
	std::cout << "FR4G-TP " << this->_name
	<< " says: \"" << clap.getName() << ", Father, I am at your mercy !\"" << std::endl;	
	clap.rangedAttack(this->_name);
}