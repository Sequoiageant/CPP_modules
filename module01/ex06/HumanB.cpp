#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(this->toupperString(name))
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
	std::cout << std::hex;
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

std::string HumanB::toupperString(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
