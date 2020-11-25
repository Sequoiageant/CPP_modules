/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 16:52:09 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

private:

public:
	PowerFist(void);
	PowerFist(std::string const & name, int apcost, int damage);
	PowerFist(PowerFist const & copy);
	virtual ~PowerFist(void);
	PowerFist& operator=(PowerFist const & rhs);

	virtual void attack(void) const;
};

std::ostream & operator<<(std::ostream & o, PowerFist const & rhs);

#endif // POWER_FIST_HPP
