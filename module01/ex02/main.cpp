/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:23:12 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:24:37 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie z1;
	Zombie *z2;

	std::cout << "Zombie created on the stack:" << std::endl;
	z1.setName("michel");
	z1.setType("runner");
	z1.announce();

	ZombieEvent *event = new ZombieEvent;

	std::cout << std::endl;
	std::cout << "Zombies created on the heap:" << std::endl;
	event->setZombieType("stalker"); 
	z2 = event->newZombie("Roger"); 
	z2->announce();
	std::cout << "--> Back to main <--" << std::endl;
	delete z2;

	std::cout << std::endl;
	std::cout << "Zombie created on the stack with random name:" << std::endl;
	event->randomChump();

	std::cout << std::endl;
	std::cout << "--> Back to main <--" << std::endl;

	delete event;
	return 0;
}
