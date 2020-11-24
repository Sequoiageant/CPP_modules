/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:54:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 12:00:22 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "HouseElf.hpp"

int main(void)
{
	{	
		std::cout << "======> ORIGINAL TESTS <=====" << std::endl;
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << robert << jim << joe;
		
		robert.polymorph(jim);
		robert.polymorph(joe);		
	}
	
	{
		std::cout << std::endl;
		std::cout << "======> TESTS WITH POINTERS <=====" << std::endl;
		Sorcerer robert("Robert", "the Magnificent");
		Victim* dobby = new HouseElf("dobby");
		HouseElf* Kreattur = new HouseElf("Kreattur");

		std::cout << std::endl;
		std::cout << robert << *dobby;
		dobby->introduce();
		robert.polymorph(*dobby);
		
		std::cout << std::endl;
		std::cout << *Kreattur;
		Kreattur->introduce();
		robert.polymorph(*Kreattur);
		
		std::cout << std::endl;
	
		delete(dobby);
		delete(Kreattur);
	}
	return 0;
}