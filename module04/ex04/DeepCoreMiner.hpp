/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:40:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 16:09:53 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEP_CORE_MINER_HPP
# define DEEP_CORE_MINER_HPP

# include <string>
# include <iostream>
# include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser {

public:
	DeepCoreMiner(void);
	DeepCoreMiner(DeepCoreMiner const & copy);
	~DeepCoreMiner(void);

	DeepCoreMiner & operator=(DeepCoreMiner const & rhs);
	virtual void mine(IAsteroid*);
};

std::ostream & operator<<(std::ostream & o, DeepCoreMiner const & rhs);

#endif // DEEP_CORE_MINER_HPP
