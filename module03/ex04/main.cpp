/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 14:43:45 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <algorithm>

int main(void)
{
	{	
		std::cout << std::endl;
		std::cout << "============ ClapTrap example (Father) ============" << std::endl;
		ClapTrap Father("Father");

		std::cout << std::endl;
		std::cout << "DAMAGE & REPAIR:" << std::endl;
		Father.rangedAttack("POOR GUY");
		Father.takeDamage(16);
		Father.beRepaired(150);
		Father.takeDamage(150);
		Father.takeDamage(5);
		Father.takeDamage(50);

		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "============ FragTrap example (daughter) ============" << std::endl;
		FragTrap Maya("Maya");

		std::cout << std::endl;
		std::cout << "DAMAGE & REPAIR:" << std::endl;
		Maya.takeDamage(16);
		Maya.beRepaired(150);
		Maya.takeDamage(150);
		Maya.takeDamage(5);
		Maya.takeDamage(50);

		std::cout << std::endl;
		std::cout << "Fragtrap Semi-Random FUNNY ATTACKS:" << std::endl;
		Maya.vaulthunter_dot_exe("POOR GUY 0");
		Maya.vaulthunter_dot_exe("POOR GUY 1");
		Maya.vaulthunter_dot_exe("POOR GUY 2");
		Maya.vaulthunter_dot_exe("POOR GUY 3");
		Maya.vaulthunter_dot_exe("POOR GUY 4");

		std::cout << std::endl;
		std::cout << "============ ScavTrap example (daughter) ============" << std::endl;
		std::cout << std::endl;
		ScavTrap Zer0("Zer0");

		std::cout << "DAMAGE & REPAIR:" << std::endl;
		Zer0.takeDamage(16);
		Zer0.beRepaired(150);
		Zer0.takeDamage(150);
		Zer0.takeDamage(5);
		Zer0.takeDamage(50);
		Zer0.beRepaired(3);

		std::cout << std::endl;
		std::cout << "ScavTrap Semi-Random CHALLENGE:" << std::endl;
		Zer0.challengeNewcomer();
		Zer0.challengeNewcomer();
		Zer0.challengeNewcomer();
		Zer0.challengeNewcomer();
		Zer0.challengeNewcomer();

		std::cout << std::endl;
		std::cout << "============ NinjaTrap example (daughter) ============" << std::endl;
		std::cout << std::endl;
		NinjaTrap Ninja("Ninja");

		std::cout << std::endl;
		std::cout << "NinjaTrap ninjaShoebox:" << std::endl;
		Ninja.ninjaShoebox(Maya);
		Ninja.ninjaShoebox(Zer0);
		Ninja.ninjaShoebox(Ninja);
		Ninja.ninjaShoebox(Father);

		std::cout << std::endl;
		std::cout << "============ SuperTrap example (daughter) ============" << std::endl;
		std::cout << std::endl;
		SuperTrap Super("Super");
		
		Super.introduction();
		
		std::cout << "SuperTrap range & melee attacks:" << std::endl;
		Super.rangedAttack("POOR GUYYY");
		Super.meleeAttack("POOR GUYYY");
		std::cout << std::endl;
		std::cout << "SuperTrap ninjaShoebox:" << std::endl;
		Super.ninjaShoebox(Maya);
		Super.ninjaShoebox(Zer0);
		Super.ninjaShoebox(Father);
		std::cout << "SuperTrap vaulthunter_dot_exe:" << std::endl;
		Super.vaulthunter_dot_exe("POOR GUYYY");
	}

	return 0;
}