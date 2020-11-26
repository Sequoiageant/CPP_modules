/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/26 18:57:18 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & copy)
{
	// *this = copy;
	(void)copy;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine* TacticalMarine::clone(void) const
{
	return (new TacticalMarine);
}

void TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
