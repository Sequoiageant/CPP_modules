/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:20:40 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:24:48 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

public:
	Zombie();
	~Zombie();
	void announce(void) const;
	void setName(std::string name);
	void setType(std::string type);

private:
	std::string _name;
	std::string _type;

};

#endif // ZOMBIE_HPP
