/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/27 12:03:55 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class Ice {

public:
	Ice(void);
	Ice(std::string const & type);
	Ice(Ice const & copy);
	virtual ~Ice();
	Ice & operator=(Ice const & rhs);

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

std::ostream & operator<<(std::ostream & o, Ice const & rhs);

#endif // ICE_HPP
