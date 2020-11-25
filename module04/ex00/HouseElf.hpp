/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HouseElf.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:38:44 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 14:35:50 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOUSE_ELF_HPP
# define HOUSE_ELF_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class HouseElf : public Victim {

private:
	HouseElf(void);

public:
	HouseElf(std::string const name);
	HouseElf(HouseElf const & copy);
	virtual ~HouseElf(void);
	HouseElf& operator=(HouseElf const & rhs);

	virtual void	introduce(void) const;
	virtual void	getPolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & o, HouseElf const & rhs);

#endif // HOUSE_ELF_HPP
