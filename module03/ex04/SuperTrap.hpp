#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

private:
	/* attributes */

public:
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & copy);
	~SuperTrap(void);
	void	introduction(void) const;

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

	void	ninjaShoebox(SuperTrap & clap) const;
	void	ninjaShoebox(FragTrap & clap) const;
	void	ninjaShoebox(ScavTrap & clap) const;
	void	ninjaShoebox(ClapTrap & clap) const;

	void	vaulthunter_dot_exe(std::string const & target);


	SuperTrap& operator=(SuperTrap const & rhs);
};

std::ostream & operator<<(std::ostream & o, SuperTrap const & rhs);

#endif // SUPER_TRAP_HPP
