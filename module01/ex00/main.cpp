#include <iostream>
#include "Pony.hpp"

int	ponyOnTheStack(void)
{
	Pony panpan("panpan", "red", "double");
	Pony cucu("matt", "blue", "simple");
	panpan.displayColor();
	cucu.displayColor();

	return 0;
}

int	ponyOnTheHeap(void)
{
	Pony *pinky = new Pony("pinky pie", "green", "double");
	Pony *apple = new Pony("applejack", "orange", "simple");

	pinky->displayColor();
	apple->displayColor();

	delete pinky;
	delete apple;

	return 0;
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}