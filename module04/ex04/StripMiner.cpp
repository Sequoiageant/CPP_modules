/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:40:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 15:10:29 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"
#include "IAsteroid.hpp"

StripMiner::StripMiner(void)
{
	return;
}

StripMiner::StripMiner(StripMiner const & copy)
{
	*this = copy;
}

StripMiner::~StripMiner(void)
{
	return;
}

StripMiner & StripMiner::operator=(StripMiner const & rhs)
{
	(void)rhs;
	return (*this);
}

void StripMiner::mine(IAsteroid* a)
{
	std::cout << "* strip mining... got " << a->beMined(this) << "! *" << std::endl;
}
