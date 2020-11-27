/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/27 12:05:28 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria {

private:
	std::string		_type;
	unsigned int	_xp;

public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & copy);
	virtual ~AMateria();
	AMateria & operator=(AMateria const & rhs);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

std::ostream & operator<<(std::ostream & o, AMateria const & rhs);

#endif // A_MATERIA_HPP
