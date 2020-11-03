#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{

public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon & weapon);
	void	attack(void) const;

private:
	std::string	_name;	
	Weapon*		_weapon;	

};


#endif // HUMAN_B_HPP
