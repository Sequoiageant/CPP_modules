/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/26 16:33:35 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* joe;
	// ISpaceMarine* joe;
	
	ISquad* vlc = new Squad;
	ISquad* vlc_copy = new Squad(vlc);
	
	joe = jim;

	std::cout << std::endl << "------> PUSH TESTS <------" << std::endl;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(NULL);	// Try to push a NULL marine
	vlc->push(jim);		// Try to push a marine already in squad
	vlc->push(joe);		// Try to push a marine already in squad joe = jim
	
	std::cout << std::endl << "------> ATTACK TESTS OF ALL UNITS IN SQUAD <------" << std::endl;
	/*Count of marines in Squad vlc*/
	std::cout << "Count of units in squad: " << vlc->getCount() << std::endl;
	std::cout << "Count of units in squad: " << vlc_copy->getCount() << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc; // Should delete all Units in Squad vlc

	return 0;
}