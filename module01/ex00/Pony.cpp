#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string type) : _PonyIndex(Pony::_nbPony), _name(name), _color(color), _type(type)
{
	std::cout << "Pony " << name << " with index " << this->_PonyIndex << " was born..." << std::endl;
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

void Pony::displayDeath(void) const
{
	std::cout << this->_name << " died." << std::endl;
}

std::string Pony::getColor(void) const
{
	return this->_color;
}

int		Pony::_nbPony = 0;