/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:48 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/25 11:18:56 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_SQUAD_HPP
# define I_SQUAD_HPP

# include "ISpaceMarine"

class ISquad {

public:
	virtual ~ISquad(void) {};  // all destructors must exist
	virtual int getCount(void) const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif // I_SQUAD_HPP
