/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/25 10:15:32 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_SQUAD_HPP
# define I_SQUAD_HPP

# include <string>
# include <iostream>

class ISquad {

public:
	ISquad(void);
	ISquad(ISquad const & copy);
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
	ISquad & operator=(ISquad const & rhs);
};

std::ostream & operator<<(std::ostream & o, ISquad const & rhs);

#endif // I_SQUAD_HPP
