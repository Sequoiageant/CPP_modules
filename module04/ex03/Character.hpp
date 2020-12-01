/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/30 12:26:19 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CPP
# define CHARACTER_CPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter {

private:
	Character(void);
	std::string	_name;
	AMateria*	_inv[4];
	int			_nbMateria;

public:
	Character(std::string const name);
	Character(Character const & copy);
	virtual ~Character(void);
	virtual Character & operator=(Character const & rhs);

	virtual std::string const & getName() const;
	virtual AMateria*	getInv(int idx) const;
	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);

	virtual void	displayInv(void) const;
};

std::ostream & operator<<(std::ostream & o, ICharacter const & rhs);

#endif // CHARACTER_CPP
