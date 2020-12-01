/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:12:59 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 14:29:00 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Asteroid.hpp"

Asteroid::Asteroid(void) : _name("Asteroid")
{
	return;	
}

Asteroid::Asteroid(Asteroid const & copy)
{
	this->_name = copy._name;
}

Asteroid::~Asteroid(void)
{
	return;
}

Asteroid & Asteroid::operator=(Asteroid const & rhs)
{
	this->_name = rhs._name;
	return (*this);
}

std::string Asteroid::beMined(StripMiner* miner) const
{
	(void)miner;
	return "Flavium";
}

std::string Asteroid::beMined(DeepCoreMiner* miner) const
{
	(void)miner;
	return "Dragonite";
}

std::string Asteroid::getName() const
{
	return this->_name;
}
