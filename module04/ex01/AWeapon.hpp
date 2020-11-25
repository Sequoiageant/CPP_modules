/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 19:26:27 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef A_WEAPON_HPP
# define A_WEAPON_HPP

# include <string>
# include <iostream>

class AWeapon {

private:

protected:
	AWeapon(void);
	std::string	_name;
	int			_APCost;
	int			_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & copy);
	virtual ~AWeapon(void);
	AWeapon& operator=(AWeapon const & rhs);

	std::string const getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack(void) const = 0;
};

std::ostream & operator<<(std::ostream & o, AWeapon const & rhs);

#endif // A_WEAPON_HPP
