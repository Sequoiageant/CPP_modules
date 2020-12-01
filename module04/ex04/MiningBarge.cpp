/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:40:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 16:10:25 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge(void) : _laser(), _nbLasers(0)
{
	return;
}

MiningBarge::MiningBarge(MiningBarge const & copy) : _laser(), _nbLasers(copy._nbLasers)
{
	for (int i = 0; i < copy._nbLasers; ++i)
	{
		this->_laser[i] = copy._laser[i];
	}
}

MiningBarge::~MiningBarge(void)
{
	return;
}

MiningBarge & MiningBarge::operator=(MiningBarge const & rhs)
{
	for (int i = 0; i < rhs._nbLasers; ++i)
	{
		this->_laser[i] = rhs._laser[i];
	}
	this->_nbLasers = rhs._nbLasers;

	return (*this);
}

void MiningBarge::equip(IMiningLaser* laser)
{
	if (this->_nbLasers < 4)
	{
		this->_laser[this->_nbLasers] = laser;
		std::cout << "Barge equipped with new laser in idx" << this->_nbLasers << std::endl;
		this->_nbLasers++;
	}
	else
		std::cout << "The Barge is full of lasers !" << std::endl;
}

void MiningBarge::mine(IAsteroid* asteroid) const
{
	for (int i = 0; i < this->_nbLasers; ++i)
	{
		this->_laser[i]->mine(asteroid);
	}
}
