/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/11 16:58:54 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <algorithm>

int main(void)
{
	{	
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
	}
	{	
		ScavTrap Zer0("Bob");

		std::cout << std::endl;
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
	}

	return 0;
}