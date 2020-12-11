#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {

private:

protected:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_max_hit_points;
	unsigned int	_energy_points;
	unsigned int	_max_energy_points;
	unsigned int	_level;
	unsigned int	_melee_attack_damage;
	unsigned int	_ranged_attack_damage;
	unsigned int	_armor_damage_reduction;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int hp, unsigned int max_hp, unsigned int ep, unsigned int max_ep, unsigned int level, unsigned int mad, unsigned int rad, unsigned int adr);
	ClapTrap(ClapTrap const & copy);
	~ClapTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap& operator=(ClapTrap const & rhs);
};

#endif // CLAP_TRAP_HPP
