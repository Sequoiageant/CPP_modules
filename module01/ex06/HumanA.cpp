#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon & weapon) : _name(this->toupperString(name)), _weapon(weapon)
{
	return;
}

HumanA::~HumanA() {}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

std::string HumanA::toupperString(std::string str)
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
