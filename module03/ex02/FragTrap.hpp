/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:14:35 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 14:15:04 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

private:
	FragTrap(void);

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap(void);

	void	vaulthunter_dot_exe(std::string const & target);
	
	/* Custom Attacks */
	void	funnyAttack(std::string const & target);
	void	sleepingAttack(std::string const & target);
	void	crapyAttack(std::string const & target);
	/* Custom Attacks */

	FragTrap& operator=(FragTrap const & rhs);
};

#endif // FRAG_TRAP_HPP
