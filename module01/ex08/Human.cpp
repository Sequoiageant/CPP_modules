#include "Human.hpp"
#include <iostream>

#define	NB_ATTACKS 3

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack() on " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack() on " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "intimidatingShout() on " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	typedef	void		(Human::*t_attack)(std::string const &);
	static std::string	attacks[NB_ATTACKS] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	static t_attack		func[NB_ATTACKS] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	int	i(0);

	while (i < NB_ATTACKS)
	{
		if (attacks[i] == action_name)
		{
			(this->*func[i])(target);
			return;
		}
		i++;
	}
	std::cout << "This attack doesn't exist: '" << action_name << "'" << std::endl;
}
