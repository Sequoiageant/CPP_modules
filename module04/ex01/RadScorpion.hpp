/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:56:57 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 17:59:29 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {

private:

public:
	RadScorpion(void);
	RadScorpion(int hp, std::string const & type);
	RadScorpion(RadScorpion const & copy);
	virtual ~RadScorpion(void);
	RadScorpion& operator=(RadScorpion const & rhs);

	// virtual void		takeDamage(int);
};

std::ostream & operator<<(std::ostream & o, RadScorpion const & rhs);

#endif // RAD_SCORPION_HPP
