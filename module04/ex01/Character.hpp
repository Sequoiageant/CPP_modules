/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 18:53:44 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

private:
	std::string	_name;
	int			_AP;
	AWeapon*	_weapon;

public:
	Character(void);
	Character(std::string const & name);
	Character(Character const & copy);
	~Character(void);
	Character& operator=(Character const & rhs);

	void recoverAP(void);
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const	getName(void) const;
	int					getAP(void) const;
	AWeapon*			getWeapon(void) const;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif // CHARACTER_HPP
