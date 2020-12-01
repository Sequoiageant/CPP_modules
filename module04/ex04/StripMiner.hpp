/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:40:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 15:07:30 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIP_MINER_HPP
# define STRIP_MINER_HPP

# include <string>
# include <iostream>
# include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser {

private:
	/* attributes */

public:
	StripMiner(void);
	StripMiner(StripMiner const & copy);
	~StripMiner(void);

	StripMiner & operator=(StripMiner const & rhs);
	virtual void mine(IAsteroid*);

};

std::ostream & operator<<(std::ostream & o, StripMiner const & rhs);

#endif // STRIP_MINER_HPP
