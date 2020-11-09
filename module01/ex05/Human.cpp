/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:53:23 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:38:31 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <string>

Human::Human()
{
	return;
}

Human::~Human()
{
	return;
}

std::string Human::identify(void) const
{
	return this->_brain.identify();
}

const Brain& Human::getBrain(void) const
{
	return this->_brain;
}
