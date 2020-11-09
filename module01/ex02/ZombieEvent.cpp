/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:21:06 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:24:55 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent()
{
	this->_type = "no type";
	std::cout << "ZombieEvent instantiated" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent deleted" << std::endl;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) const
{
	Zombie *z = new Zombie;

	z->setName(name);
	z->setType(this->_type);
	return z;
}

void	getRandomString(int len, std::string & str)
{
	int	i(0);

	srand (time(NULL));
	while (i < len)
	{
		str.push_back(rand() % 26 + 'a');
		i++;
	}
}

void	ZombieEvent::randomChump(void) const
{
	Zombie z;

	std::string name;
	getRandomString(7, name);
	z.setName(name);
	z.setType(this->_type);
	z.announce();
}
