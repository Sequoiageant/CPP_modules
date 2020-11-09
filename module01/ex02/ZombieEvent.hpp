/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 09:34:35 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:26:01 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{

public:
	ZombieEvent();
	~ZombieEvent();
	
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name) const;
	void	randomChump(void) const;

private:
	std::string _type;

};

#endif // ZOMBIE_EVENT_HPP