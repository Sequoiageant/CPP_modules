/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:14:35 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 10:47:34 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

	void	vaulthunter_dot_exe(std::string const & target);
	
	/* Custom Attacks */
	void	funnyAttack(std::string const & target);
	void	sleepingAttack(std::string const & target);
	void	crapyAttack(std::string const & target);
	/* End Custom Attacks */

	FragTrap& operator=(FragTrap const & rhs);
};

// std::ostream& operator<<(std::ostream & o, FragTrap const & rhs);

#endif // FRAG_TRAP_HPP
