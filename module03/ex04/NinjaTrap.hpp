/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:50:58 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/12 15:23:10 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

private:

public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & copy);
	~NinjaTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

	void	ninjaShoebox(NinjaTrap & clap) const;
	void	ninjaShoebox(FragTrap & clap) const;
	void	ninjaShoebox(ScavTrap & clap) const;
	void	ninjaShoebox(ClapTrap & clap) const;

	NinjaTrap& operator=(NinjaTrap const & rhs);
};

// std::ostream & operator<<(std::ostream & o, NinjaTrap const & rhs);

#endif // NINJA_TRAP_HPP
