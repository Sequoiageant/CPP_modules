/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/25 18:59:16 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad(void) : _count(0), _units(NULL)
{
	std::cout << "Squad created" << std::endl;
}

Squad::Squad(Squad const & copy)
{
	while (this->_units)
	{
		delete this->units;
		this->_unit = this->_units->_next;
	}
	this->_units = NULL;
	
	for (int i = 0; i < copy.getCount(); i++)
	{
		this->push((copy.getUnit(i))->clone());
	}
	delete copy._units;
}

/*Squad::Squad(Squad const & copy)
{
	this->_count = copy._count;
	this->_units = new ISpaceMarine*[this->count];
	
	int i = 0;
	while (i < this->count)
	{
		this->_units[i] = copy._units[i];
		i++;
	}
}
*/
Squad::~Squad(void)
{
	int i = 0;
	while (i < this->count)
	{
		delete this->_units[i]
		i++;
	}
	delete this->_units;
}

int Squad::getCount(void) const
{
	return this->_count;
}

ISpaceMarine* Squad::getUnit(int N) const
{
	if (N < 0 || N >= this->_count)
		return NULL;

	int i = 0;
	while(i < N)
	{
	    this->_units = this->units->next;
	    i++;
	}

	return this->_units->marine;
}

int Squad::push(ISpaceMarine* marine)
{
	t_unit *newUnit;
	t_unit *copy;

	while(copy)
	{
		if (marine = this->_marine->marine)
			return (this->_count);
		copy = copy->next;
	}
	if (marine)
	{
		newUnit->marine = marine;
		newUnit->next = NULL;
		this->_units->next = newUnit;
	}
	return (this->_count);
}

Squad & Squad::operator=(Squad const & rhs)
{

}
