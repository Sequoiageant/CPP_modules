/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/26 16:07:53 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {

private:
	typedef struct		s_unit
	{
		ISpaceMarine*	marine;
		struct s_unit	*next;
	}					t_unit;

	/*Attributs*/
	int					_count;
	t_unit				*_units;

	bool checkDuplicate(ISpaceMarine*);
	
public:
	Squad(void);
	Squad(Squad const & copy);
	virtual ~Squad(void);
	virtual int getCount(void) const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);

	Squad & operator=(Squad const & rhs);
};

std::ostream & operator<<(std::ostream & o, Squad const & rhs);

#endif // SQUAD_HPP
