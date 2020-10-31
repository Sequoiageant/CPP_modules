#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string type) : _name(name), _color(color), _type(type)
{
	std::cout << "Pony " << name << " was born..." << std::endl;
	Pony::_nbPony++;
	return;
}

Pony::~Pony()
{
	std::cout << this->_name << " died." << std::endl;
	return;
}

void Pony::displayColor(void) const
{
	std::cout << this->_name << ": my color is " << this->_color << std::endl;
}

int		Pony::_nbPony = 0;