#include <iostream>
#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	std::cout << "setZombieType function: " << type << std::endl;
}

Zombie	*ZombieEvent::newZombie(std::string name) const
{
	std::cout << "newZombie function" << std::endl;
}

void	ZombieEvent::randomChump(void) const
{
	std::cout << "randomChump function" << std::endl;
}
