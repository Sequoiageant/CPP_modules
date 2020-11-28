/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/28 12:23:33 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHARACTER_HPP
# define I_CHARACTER_HPP

# include <string>
# include <iostream>

class AMateria;

class ICharacter {

public:

	virtual ~ICharacter(void) {};
	virtual std::string const & getName(void) const = 0;
	virtual AMateria*	getInv(int idx) const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

	virtual void	displayInv(void) const = 0;

};

#endif // I_CHARACTER_HPP
