/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/12 12:27:36 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib> // rand()

ScavTrap::ScavTrap() : ClapTrap("no name", 100, 100, 50, 50, 1, 20, 15, 3)
{
	srand(time(NULL));
	std::cout << "ScavTrap Default constructor called, " << this->_name
	<< " says: \"Bacon is for sycophants and products of incest\"" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	srand(time(NULL));
	std::cout << "ScavTrap Overload constructor called, " << this->_name
	<< " says: \"I'M A SCAVTRAP\"" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
	*this = copy;
	std::cout << "ScavTrap Copy constructor called, " << this->_name
	<< " says: \"OUPS, I'M JUST A COPY OF SCAVTRAP\"" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called, " << this->_name << " died with honors" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "ScavTrap Assignement operator called" << std::endl;
    ClapTrap::operator=(rhs);
 
    return(*this);
}

void	ScavTrap::challengeNewcomer(void) const
{
	static std::string	challenges[5] = {"challenge 1", "challenge 2", "challenge 3", "challenge 4", "challenge 5"};

	std::cout << "FR4G-TP " << this->_name
	<< " offers: And the challenge is.... " << challenges[rand() % 5] << " !" << std::endl;	
}
