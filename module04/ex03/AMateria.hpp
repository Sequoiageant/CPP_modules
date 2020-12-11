/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 17:13:41 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>
# include <iostream>

class ICharacter;

class AMateria {

private:
	std::string		_type;
	unsigned int	_xp;
	AMateria(void);

public:
	AMateria(std::string const & type);
	AMateria(AMateria const & copy);
	virtual ~AMateria(void);
	AMateria & operator=(AMateria const & rhs);

	std::string const & getType(void) const; //Returns the materia type
	unsigned int getXP(void) const; //Returns the Materia's XP

	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
};

#endif // A_MATERIA_HPP
