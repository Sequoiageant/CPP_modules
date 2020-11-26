/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/26 10:05:53 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

private:
	/* attributes */

public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const & copy);
	virtual ~TacticalMarine(void);
	virtual ISpaceMarine* clone(void) const;
	virtual void battleCry(void) const;
	virtual void rangedAttack(void) const;
	virtual void meleeAttack(void) const;

	TacticalMarine & operator=(TacticalMarine const & rhs);
};

std::ostream & operator<<(std::ostream & o, TacticalMarine const & rhs);

#endif // TACTICAL_MARINE_HPP
