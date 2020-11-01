#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie z1("michel", "runner");
	Zombie z2("berthe", "crawler");

	z1.advert();
	z2.advert();
	return 0;
}
