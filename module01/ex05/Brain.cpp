/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:54:01 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:40:51 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

Brain::Brain() : _nbOfNeurons(2)
{
	return;
}

Brain::~Brain() {}

int Brain::getNbOfNeurons() const
{
	return this->_nbOfNeurons;
}

std::string Brain::identify() const
{
 	std::stringstream ss;

	ss << this;
	return ss.str();
}
