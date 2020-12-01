/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/30 12:02:05 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include <string>
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria*	_sources[4];
	int			_nbMateria;

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & copy);
	virtual ~MateriaSource(void);
	MateriaSource & operator=(MateriaSource const & rhs);
	
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

std::ostream & operator<<(std::ostream & o, MateriaSource const & rhs);

#endif // MATERIA_SOURCE_HPP
