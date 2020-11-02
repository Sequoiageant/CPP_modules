#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

Brain::Brain() : _nbOfNeurons(2)
{
	return;
}

Brain::~Brain()
{

}

int Brain::getNbOfNeurons() const
{
	return this->_nbOfNeurons;
}

std::string Brain::identify() const
{
 	std::stringstream ss;

	ss << this;
	return ss.str();
}
