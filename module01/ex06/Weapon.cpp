#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(this->toupperString(type))
{
	return;
}

Weapon::~Weapon(){}

const std::string&	Weapon::getType(void) const
{
	return this->_type;
}

void				Weapon::setType(std::string type)
{
	this->_type = this->toupperString(type);
}

std::string Weapon::toupperString(std::string str)
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
