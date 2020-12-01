/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:11:52 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 14:15:45 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMET_HPP
# define COMET_HPP

# include <string>
# include <iostream>
# include "IAsteroid.hpp"

class Comet : public IAsteroid {

private:
	std::string _name;

public:
	Comet(void);
	Comet(Comet const & copy);
	~Comet(void);

	Comet & operator=(Comet const & rhs);

	virtual std::string beMined(StripMiner *) const;
	virtual std::string beMined(DeepCoreMiner *) const;
	virtual std::string getName() const;
};

std::ostream & operator<<(std::ostream & o, Comet const & rhs);

#endif // COMET_HPP
