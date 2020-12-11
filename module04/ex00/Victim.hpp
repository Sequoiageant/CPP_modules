/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:54:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 15:52:38 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim {

protected:
	Victim(void);
	std::string _name;

public:
	Victim(std::string const name);
	Victim(Victim const & copy);
	virtual ~Victim(void);
	Victim& operator=(Victim const & rhs);

	std::string const	getName(void) const;
	virtual void		introduce(void) const;
	virtual void		getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream & o, Victim const & rhs);

#endif // VICTIM_HPP
