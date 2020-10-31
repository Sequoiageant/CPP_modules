#include <iostream>
#include "Pony.hpp"

int	ponyOnTheStack(void)
{
	Pony panpan("panpan", "red", "double");
	Pony cucu("matt", "blue", "simple");

	std::cout << "We are ponies on Stack !" << std::endl;

	panpan.displayColor();
	cucu.displayColor();

	return 0;
}

int	ponyOnTheHeap(void)
{
	Pony *pinky = new Pony("pinky pie", "green", "double");
	Pony *apple = new Pony("applejack", "orange", "simple");

	std::cout << "We are ponies on Heap !" << std::endl;

	pinky->displayColor();
	apple->displayColor();

	delete pinky;
	delete apple;

	return 0;
}

int main(void)
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return 0;
}