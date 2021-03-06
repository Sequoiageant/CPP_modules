/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:21:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:42:22 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{

public:
	HumanA(std::string name, Weapon & weapon);
	~HumanA();
	void	attack(void) const;

private:
	std::string	_name;	
	Weapon&		_weapon;
	std::string toupperString(std::string str);
};

#endif // HUMAN_A_HPP
