/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 18:22:23 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _sources(), _nbMateria(0)
{
	return;
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_nbMateria; ++i)
	{
		delete this->_sources[i];
	}
	return;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	/*Delete old Materia in sources*/
	for (int i = 0; i < this->_nbMateria; ++i)
	{
		delete this->_sources[i];
		this->_sources[i] = NULL;
	}

	/*copy new Materia*/
	for (int i = 0; i < 4; ++i)
	{
		if (rhs._sources[i])
			this->_sources[i] = rhs._sources[i]->clone();
		else
			this->_sources[i] = NULL;
	}

	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->_nbMateria < 4)
	{
		this->_sources[this->_nbMateria] = m;
		std::cout << "New Materia " << m->getType() << " learned " << m->getType() << " in idx " << this->_nbMateria << std::endl;
		this->_nbMateria++;
	}
	else
		std::cout << "Materia sources is full !" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_nbMateria; ++i)
	{
		if (this->_sources[i]->getType() == type)
		{
			std::cout << "Materia " << type << " created..." << std::endl;
			return this->_sources[i]->clone();
		}
	}
	std::cout << "Materia of type " << type << " is unknown, learn it to be able to create it !" << std::endl;
	return NULL;
}
