/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:40:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 15:56:42 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINING_BARGE_HPP
# define MINING_BARGE_HPP

# include <string>
# include <iostream>
# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge {

private:
	IMiningLaser*	_laser[4];
	int				_nbLasers;

public:
	MiningBarge(void);
	MiningBarge(MiningBarge const & copy);
	~MiningBarge(void);

	MiningBarge & operator=(MiningBarge const & rhs);

	void equip(IMiningLaser*);
	void mine(IAsteroid*) const;
};

std::ostream & operator<<(std::ostream & o, MiningBarge const & rhs);

#endif // MINING_BARGE_HPP
