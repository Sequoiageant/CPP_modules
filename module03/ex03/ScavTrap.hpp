/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:55:52 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 14:30:12 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:
	ScavTrap(void);

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & copy);
	~ScavTrap(void);

	void	challengeNewcomer(void) const;

	ScavTrap& operator=(ScavTrap const & rhs);
};

// std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs);

#endif // SCAV_TRAP_HPP
