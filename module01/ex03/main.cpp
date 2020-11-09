/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:26:34 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:33:03 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

#define NB_ZOMBIES 5

int main()
{
	ZombieHorde *horde = new ZombieHorde(NB_ZOMBIES);
	int			i(0);

	std::cout << std::endl;
	std::cout << "Zombie Annouce after been selected:" << std::endl;
	while (i < NB_ZOMBIES)
	{
		horde->selectZombie(i);
		horde->soloAnnounce();
		i++;
	}

	std::cout << std::endl;
	std::cout << "All Zombies Annouce:" << std::endl;
	horde->announce();
	std::cout << std::endl;

	delete horde;
	return 0;
}
