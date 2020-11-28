/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/28 10:58:23 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {

public:
	Ice(void);
	Ice(Ice const & copy);
	virtual ~Ice(void);
	Ice & operator=(Ice const & rhs);

	virtual Ice* clone(void) const;
	virtual void use(ICharacter& target);
};

std::ostream & operator<<(std::ostream & o, Ice const & rhs);

#endif // ICE_HPP
