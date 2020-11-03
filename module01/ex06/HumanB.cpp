#include "HumanB.hpp"
#include <iostream>
#include <cctype>

HumanB::HumanB(std::string name) : _name(name)
{
	return;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack() const
{
	std::cout << std::uppercase << this->_name << " attacks with his " << std::uppercase << this->_weapon->getType() << std::endl;
}
