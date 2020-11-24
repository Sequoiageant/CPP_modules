/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:54:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 13:51:22 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {

private:
	Peon(void);

public:
	Peon(std::string const name);
	Peon(Peon const & copy);
	virtual ~Peon(void);
	Peon& operator=(Peon const & rhs);

	virtual void	introduce(void) const;
	virtual void	getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream & o, Peon const & rhs);

#endif // PEON_HPP
