/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/27 10:51:35 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:
	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & copy);
	virtual ~AssaultTerminator(void);
	virtual ISpaceMarine* clone(void) const;
	virtual void battleCry(void) const;
	virtual void rangedAttack(void) const;
	virtual void meleeAttack(void) const;

	AssaultTerminator & operator=(AssaultTerminator const & rhs);
};

std::ostream & operator<<(std::ostream & o, AssaultTerminator const & rhs);

#endif // ASSAULT_TERMINATOR_HPP
