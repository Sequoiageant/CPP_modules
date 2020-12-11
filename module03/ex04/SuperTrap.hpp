#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

private:
	using FragTrap::_hit_points;
	using FragTrap::_max_hit_points;
	using NinjaTrap::_energy_points;
	using NinjaTrap::_max_energy_points;
	using NinjaTrap::_melee_attack_damage;
	using FragTrap::_ranged_attack_damage;
	using FragTrap::_armor_damage_reduction;
	SuperTrap(void);

public:
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & copy);
	~SuperTrap(void);
	SuperTrap& operator=(SuperTrap const & rhs);

	void introduction(void) const;

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
	using NinjaTrap::ninjaShoebox;
	using FragTrap::vaulthunter_dot_exe;

};

std::ostream & operator<<(std::ostream & o, SuperTrap const & rhs);

#endif // SUPER_TRAP_HPP
