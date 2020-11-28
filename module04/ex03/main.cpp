/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/28 16:51:30 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	ICharacter* moi = new Character("moi");
	
	AMateria* tmp1 = new Cure;
	std::cout << "Cure: " << tmp1 << std::endl;
	AMateria* tmp2 = new Ice;
	std::cout << "Ice: " << tmp2 << std::endl;
	// tmp = src->createMateria("ice");
	moi->equip(tmp1);
	// tmp = src->createMateria("cure");
	moi->equip(tmp2);

	moi->displayInv();
	ICharacter* bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	moi->unequip(0);
	moi->displayInv();

	// AMateria* tmp3 = new Ice;
	// std::cerr << "XP tmp1: " << tmp1->getXP() << std::endl;;
	// std::cerr << "XP tmp2: " << tmp2->getXP() << std::endl;;
	// *tmp3 = *tmp1;
	// moi->equip(tmp3);
	// moi->displayInv();

	delete bob;
	delete moi;
	// delete src;

	return 0;
}
