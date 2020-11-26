/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/26 19:01:02 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad(void) : _count(0), _units(NULL)
{
	std::cout << "Squad created" << std::endl;
}

Squad::Squad(Squad const & copy)
{
	t_unit *tmp;

	// while (this->_units)
	// {
	// 	tmp = this->_units->next;
	// 	delete this->_units->marine;
	// 	delete this->_units;
	// 	this->_units = tmp;
	// }

	if (this->_units != NULL)
    {
        delete this->_units->marine;
        tmp = this->_units;
        this->_units = this->_units->next;
        delete tmp;
    }
		std::cerr << "AVANT CLONE" << std::endl;
	this->_count = copy._count;
	std::cerr << "COUNT: " << this->_count << std::endl;
	// this->_units = new t_unit;
	for (int i = 0; i < copy.getCount(); i++)
	{
		std::cerr << "IN LOOP" << std::endl;
		this->push((copy.getUnit(i))->clone());
	}
		std::cerr << "APRES CLONE" << std::endl;
	// delete copy._units;
}

Squad::~Squad(void)
{
	t_unit *tmp;

	while (this->_units)
	{
		tmp = this->_units->next;
		delete this->_units->marine;
		delete this->_units;
		this->_units = tmp;
	}
}

int Squad::getCount(void) const
{
	return this->_count;
}

ISpaceMarine* Squad::getUnit(int N) const
{
	t_unit *copy;

	if (N < 0 || N >= this->_count)
		return NULL;

	copy = this->_units;
	int i = 0;
	while(i < N)
	{
		copy = copy->next;
		i++;
	}

	return (copy->marine);
}

bool Squad::checkDuplicate(ISpaceMarine* marine)
{
	t_unit *copy;

	copy = this->_units;
	while(copy)
	{
		if (marine == copy->marine)
		{
			std::cerr << "The marine is already in Squad" << std::endl;
			return (false);
		}
		copy = copy->next;
	}
	return (true);
}


int Squad::push(ISpaceMarine* marine)
{
	t_unit *newUnit;
	t_unit *copy;

	if (marine)
	{
		newUnit = new t_unit;
		newUnit->marine = marine;
		newUnit->next = NULL;
		if (this->_units)
		{
			copy = this->_units;
			if (this->checkDuplicate(marine))
			{
				copy = this->_units;
				while(copy->next)
				{
					copy = copy->next;
				}
				copy->next = newUnit;				
				std::cerr << "newUnit in PRE existing list" << std::endl;
			}
			else
			{
				delete (newUnit);
				return (this->_count);
			}
		}
		else
		{
			this->_units = newUnit;
			std::cerr << "newUnit in NON existing list" << std::endl;
		}
		this->_count++;
	}
	else
		std::cerr << "The marine cannot be NULL" << std::endl;
	return (this->_count);
}

Squad & Squad::operator=(Squad const & rhs)
{
	(void)rhs;
	return (*this);
}
