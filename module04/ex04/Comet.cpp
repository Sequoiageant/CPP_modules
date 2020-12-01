/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:12:00 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 15:13:06 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Comet.hpp"

Comet::Comet(void) : _name("Comet")
{
	return;	
}

Comet::Comet(Comet const & copy)
{
	this->_name = copy._name;
}

Comet::~Comet(void)
{
	return;
}

Comet & Comet::operator=(Comet const & rhs)
{
	this->_name = rhs._name;
	return (*this);
}

std::string Comet::beMined(StripMiner* miner) const
{
	(void)miner;
	return "Tartarite";
}

std::string Comet::beMined(DeepCoreMiner* miner) const
{
	(void)miner;
	return "Meium";
}

std::string Comet::getName() const
{
	return this->_name;
}
