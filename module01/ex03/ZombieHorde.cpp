/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:29:29 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:27:01 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

ZombieHorde::ZombieHorde(int n) : _type("crawler"), _selected_zombie(0)
{
	int i(0);

	if (n < 0)
		return;
	this->_nbZombies = n;
	this->_horde = new Zombie[n];
	srand(time(NULL));
	while (i < n)
	{
		this->_horde[i].setName(this->getRandomName(7));
		this->_horde[i].setType(this->_type);
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_horde;
	std::cout << "ZombieHorde deleted" << std::endl;
}

void	ZombieHorde::setZombieType(std::string type)
{
	this->_type = type;
}

void	ZombieHorde::selectZombie(int n)
{
	this->_selected_zombie = n;
}

void	ZombieHorde::announce(void) const
{
	int i(0);

	while (i < this->_nbZombies)
	{
		this->_horde[i].announce();
		i++;
	}
}

void	ZombieHorde::soloAnnounce(void) const
{
	this->_horde[this->_selected_zombie].announce();
}

std::string	ZombieHorde::getRandomName(int len) const
{
	int	i(0);
	std::string name;
	const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

	while (i < len)
	{
		name += alphabet[rand() % 26];
		i++;
	}
	return name;
}

/*std::string	ZombieHorde::getRandomName(int len)
{
	int	i(0);
	std::string name;

	srand(time(NULL));
	while (i < len)
	{
		name.push_back(rand() % 26 + 'a');
		i++;
	}
	return name;
}
*/