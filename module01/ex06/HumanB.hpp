/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:17:15 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:42:32 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{

public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon & weapon);
	void	attack(void) const;

private:
	std::string	_name;	
	Weapon*		_weapon;
	std::string toupperString(std::string str);
};


#endif // HUMAN_B_HPP
