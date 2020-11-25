/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 16:52:13 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

private:

public:
	PlasmaRifle(void);
	PlasmaRifle(std::string const & name, int apcost, int damage);
	PlasmaRifle(PlasmaRifle const & copy);
	virtual ~PlasmaRifle(void);
	PlasmaRifle& operator=(PlasmaRifle const & rhs);

	virtual void attack(void) const;
};

std::ostream & operator<<(std::ostream & o, PlasmaRifle const & rhs);

#endif // PLASMA_RIFLE_HPP
