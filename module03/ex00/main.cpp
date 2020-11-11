/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:48:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/11 15:55:07 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>

int main(void)
{
	FragTrap robot1("Claptrap");
	
	std::cout << std::endl;
	std::cout << "DAMAGE & REPAIR:" << std::endl;
	robot1.takeDamage(16);
	robot1.beRepaired(150);
	robot1.takeDamage(150);
	robot1.takeDamage(5);

	std::cout << std::endl;
	std::cout << "Semi-Random FUNNY ATTACKS:" << std::endl;
	robot1.vaulthunter_dot_exe("POOR GUY 0");
	robot1.vaulthunter_dot_exe("POOR GUY 1");
	robot1.vaulthunter_dot_exe("POOR GUY 2");
	robot1.vaulthunter_dot_exe("POOR GUY 3");
	robot1.vaulthunter_dot_exe("POOR GUY 4");

	return 0;
}