/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:22:40 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:42:46 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{

public:
	Weapon(std::string type);
	~Weapon();
	const std::string&	getType(void) const;
	void				setType(std::string type);

private:
	std::string	_type;
	std::string toupperString(std::string str);

};

#endif // WEAPON_HPP
