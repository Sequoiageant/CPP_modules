/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:12:52 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 14:14:50 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include <string>
# include <iostream>
# include "IAsteroid.hpp"

class Asteroid : public IAsteroid {

private:
	std::string _name;

public:
	Asteroid(void);
	Asteroid(Asteroid const & copy);
	~Asteroid(void);

	Asteroid & operator=(Asteroid const & rhs);

	virtual std::string beMined(StripMiner *) const;
	virtual std::string beMined(DeepCoreMiner *) const;
	virtual std::string getName() const;
};

std::ostream & operator<<(std::ostream & o, Asteroid const & rhs);

#endif // ASTEROID_HPP
