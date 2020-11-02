#include "Human.hpp"
#include "Brain.hpp"
#include <string>

Human::Human()
{
	return;
}

Human::~Human()
{
	return;
}

std::string Human::identify(void) const
{
	return this->_brain.identify();
}

const Brain& Human::getBrain(void) const
{
	return this->_brain;
}
