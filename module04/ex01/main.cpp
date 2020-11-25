/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/25 10:38:51 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	std::cout << std::endl;

	Character* moi = new Character("moi");
	std::cout << *moi;
	Enemy* a = new RadScorpion();
	Enemy* b = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->attack(a);
	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf); //The character switch his weapon, pr has not been used
	moi->attack(a);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(a);
	moi->attack(a); // RadScorpion get 0 HP --> died
	std::cout << *moi;
	moi->attack(b);
	moi->attack(b);
	moi->equip(pf);
	moi->attack(b);
	moi->attack(b); //not enough AP to attack
	moi->attack(b); //not enough AP to attack
	moi->recoverAP(); // get 10 AP more
	moi->recoverAP(); // get 10 AP more
	moi->recoverAP(); // get 10 AP more
	moi->recoverAP(); // get 10 AP more --> more than 40 AP so limited to 40 (full)
	std::cout << *moi;
	moi->attack(b);
	moi->attack(b); // SuperMutant get 0 HP --> died
	std::cout << *moi;

	delete(pr);
	delete(pf);
	delete(moi);
	return 0;
}