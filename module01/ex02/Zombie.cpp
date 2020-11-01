#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "Zombie " << this->_name << " created." << std::endl;
}

Zombie::~Zombie(){}

void Zombie::advert(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>  Braiiiiiiinnnssss ..." << std::endl;
}
