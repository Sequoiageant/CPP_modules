/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:49:50 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 10:46:31 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer {

private:
	Sorcerer(void);
	std::string _name;
	std::string _title;

public:
	Sorcerer(std::string const name, std::string const title);
	Sorcerer(Sorcerer const & copy);
	~Sorcerer(void);
	Sorcerer& operator=(Sorcerer const & rhs);

	void		introduce(void) const;
	std::string getName(void) const;
	std::string getTitle(void) const;
	void		polymorph(Victim const &) const;
};

std::string toupperString(std::string str);
std::ostream& operator<<(std::ostream & o, Sorcerer const & rhs);

#endif // SORCERER_HPP
