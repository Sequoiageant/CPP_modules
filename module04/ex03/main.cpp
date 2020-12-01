/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 11:30:26 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	{
		std::cout << "------> ORIGNINAL MAIN <------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* moi = new Character("moi");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		moi->equip(tmp);
		tmp = src->createMateria("cure");
		moi->equip(tmp);

		moi->displayInv();
		ICharacter* bob = new Character("bob");

		moi->use(0, *bob);
		moi->use(1, *bob);

		moi->displayInv();

		delete bob;
		delete moi;
		delete src;
	}
	{
		std::cout << std::endl << "------> ASSIGNATION TEST <------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		Character moi("moi");
		Character moi_cpy("moi_cpy");
		
		AMateria* tmp;
		// Create Ice & equipe moi with ice
		tmp = src->createMateria("ice");
		moi.equip(tmp);
		
		// Create Cure & equipe moi with Cure
		tmp = src->createMateria("cure");
		moi_cpy.equip(tmp);

		// Moi uses ice to increase his XP
		ICharacter* bob = new Character("bob");
		moi.use(0, *bob);
		
		// Moi_cpy before been a moi copy --> his inventory shows a cure with xp=0
		moi_cpy.displayInv();
		
		moi_cpy = moi;

		// Moi_cpy after been a moi copy --> his inventory shows a ice with xp=10
		moi_cpy.displayInv();


		delete bob;
		delete src;
	}	
	{
		std::cout << std::endl << "------> COPY TEST <------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		Character moi("moi");
		
		AMateria* tmp;
		// Create Ice & equipe moi with ice
		tmp = src->createMateria("ice");
		moi.equip(tmp);
		
		// Create Cure & equipe moi with Cure
		tmp = src->createMateria("cure");
		moi.equip(tmp);

		// Moi uses ice to increase his XP
		ICharacter* bob = new Character("bob");
		moi.use(0, *bob);

		moi.displayInv();
		
		Character moi_cpy(moi);
		// moi_cpy should have the same inventory has moi.
		moi_cpy.displayInv();
		

		std::cout << std::endl << "------> INVALID TESTS <------" << std::endl;
		
		/*Invalide inventory index*/
		moi.use(42, *bob);

		tmp = src->createMateria("cure");
		moi.equip(tmp);
		tmp = src->createMateria("cure");
		moi.equip(tmp);

		/*Moi's inventory will be full*/
		tmp = src->createMateria("cure");
		moi.equip(tmp);


		delete tmp;
		delete bob;
		delete src;
	}
	return 0;
}
