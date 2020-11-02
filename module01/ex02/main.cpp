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
	z1.advert();

	ZombieEvent *event = new ZombieEvent;

	std::cout << std::endl;
	std::cout << "Zombies created on the heap:" << std::endl;
	event->setZombieType("stalker"); 
	z2 = event->newZombie("Roger"); 
	z2->advert();
	delete z2;

	std::cout << std::endl;
	std::cout << "Zombie created on the stack with random name:" << std::endl;
	event->randomChump();

	std::cout << std::endl;
	std::cout << "--> Back to main <--" << std::endl;

	delete event;
	return 0;
}
