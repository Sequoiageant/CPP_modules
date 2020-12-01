/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:40:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 14:57:19 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_ASTEROID_HPP
# define I_ASTEROID_HPP

# include <string>
# include <iostream>
# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"
// class IMiningLaser;

class IAsteroid {

public:
	virtual ~IAsteroid() {};
	virtual std::string beMined(StripMiner *) const = 0;
	virtual std::string beMined(DeepCoreMiner *) const = 0;
	virtual std::string getName() const = 0;
};

#endif // I_ASTEROID_HPP
