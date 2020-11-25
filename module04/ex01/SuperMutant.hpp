/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 17:44:28 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {

private:

public:
	SuperMutant(void);
	SuperMutant(int hp, std::string const & type);
	SuperMutant(SuperMutant const & copy);
	virtual ~SuperMutant(void);
	SuperMutant& operator=(SuperMutant const & rhs);

	virtual void		takeDamage(int);
};

std::ostream & operator<<(std::ostream & o, SuperMutant const & rhs);

#endif // SUPER_MUTANT_HPP
