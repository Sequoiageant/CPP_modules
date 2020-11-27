/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/27 10:52:53 by julnolle         ###   ########.fr       */
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
	
	ISquad* vlc = new Squad;
	
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

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc; // Should delete all Units in Squad vlc

	std::cout << std::endl << "------> DEEP COPY <------" << std::endl;
	
	ISpaceMarine* jack = new AssaultTerminator;
	Squad* squad1 = new Squad;
	squad1->push(jack);
	
	squad1->getUnit(0)->battleCry();
	
	std::cout << "Count of units in squad1: " << squad1->getCount() << std::endl;
	std::cout << "Unit in squad1 pointer: " << squad1->getUnit(0) << std::endl;
	
	Squad* squad2 = new Squad(*squad1); //Creates squad 2 by copy of squad1

	std::cout << "Count of units in squad2: " << squad2->getCount() << std::endl;
	std::cout << "Unit in squad2 pointer: " << squad2->getUnit(0) << std::endl;
	squad2->getUnit(0)->battleCry();

	delete squad1;
	delete squad2;

	std::cout << std::endl << "------> ASSIGNATION DEEP COPY <------" << std::endl;
	
	ISpaceMarine* michel = new AssaultTerminator;
	ISpaceMarine* renee = new TacticalMarine;
	Squad* squad3 = new Squad;
	squad3->push(michel);
	
	squad3->getUnit(0)->battleCry();
	
	std::cout << "Count of units in squad3: " << squad3->getCount() << std::endl;
	std::cout << "Unit in squad3 pointer: " << squad3->getUnit(0) << std::endl;
	
	Squad squad4;
	squad4.push(renee); // push renee in squad4

	squad4 = *squad3; // Renee must be deleted in suqad 4 and a copy of michel must be pushed
	std::cout << "Count of units in squad4: " << squad4.getCount() << std::endl;
	std::cout << "Unit in squad4 pointer: " << squad4.getUnit(0) << std::endl;
	squad4.getUnit(0)->battleCry();

	delete squad3;
	return 0;
}