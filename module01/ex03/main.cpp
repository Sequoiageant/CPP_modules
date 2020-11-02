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
