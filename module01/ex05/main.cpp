#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

int main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	std::cout << "I have " << bob.getBrain().getNbOfNeurons() << " neurons..." << std::endl;
}
