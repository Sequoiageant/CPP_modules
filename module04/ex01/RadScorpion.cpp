/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 19:34:03 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Enemy.hpp"
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string const & type) : Enemy(hp, type)
{
	std::cout << "RadScorpion with type " << this->_type << " was born!" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & copy) : Enemy(copy)
{
	*this = copy;
}

RadScorpion::~RadScorpion(void)
{
	std::cout <<  "* SPROTCH *" << std::endl;
}

RadScorpion& RadScorpion::operator=(RadScorpion const & rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}
