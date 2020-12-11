/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:14:35 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 13:22:15 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include <iostream>

class FragTrap {

private:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_max_hit_points;
	unsigned int	_energy_points;
	unsigned int	_max_energy_points;
	unsigned int	_level;
	unsigned int	_melee_attack_damage;
	unsigned int	_ranged_attack_damage;
	unsigned int	_armor_damage_reduction;
	FragTrap(void);

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	
	/* Custom Attacks */
	void	funnyAttack(std::string const & target);
	void	sleepingAttack(std::string const & target);
	void	crapyAttack(std::string const & target);
	/* Custom Attacks */

	FragTrap& operator=(FragTrap const & rhs);
};

// std::ostream& operator<<(std::ostream & o, FragTrap const & rhs);

#endif // FRAG_TRAP_HPP
