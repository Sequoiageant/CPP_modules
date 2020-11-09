/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:20:33 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:24:41 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " died" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>  Braiiiiiiinnnssss ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::setType(std::string type)
{
	this->_type = type;
}
