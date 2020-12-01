/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:40:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 15:02:22 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MINING_LASER_HPP
# define I_MINING_LASER_HPP

# include <string>
# include <iostream>

class IAsteroid;

class IMiningLaser {

public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid*) = 0;
};

#endif // I_MINING_LASER_HPP
