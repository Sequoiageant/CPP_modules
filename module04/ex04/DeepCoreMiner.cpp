/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:40:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 16:09:42 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include "IAsteroid.hpp"

DeepCoreMiner::DeepCoreMiner(void)
{
	return;
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & copy)
{
	*this = copy;
}

DeepCoreMiner::~DeepCoreMiner(void)
{
	return;
}

DeepCoreMiner & DeepCoreMiner::operator=(DeepCoreMiner const & rhs)
{
	(void)rhs;
	return (*this);
}

void DeepCoreMiner::mine(IAsteroid* a)
{
	std::cout << "* mining deep... got " << a->beMined(this) << "! *" << std::endl;
}
