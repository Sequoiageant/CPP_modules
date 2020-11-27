/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:50:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/27 12:04:01 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class Cure {

private:
	/* attributes */

public:
	Cure(void);
	Cure(std::string const & type);
	Cure(Cure const & copy);
	virtual ~Cure();
	Cure & operator=(Cure const & rhs);

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);

};

std::ostream & operator<<(std::ostream & o, Cure const & rhs);

#endif // CURE_HPP
