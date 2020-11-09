/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:29:39 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:27:25 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

# include <string>
# include "Zombie.hpp"

class ZombieHorde
{

public:
	ZombieHorde(int n);
	~ZombieHorde();
	void	setZombieType(std::string type);
	void	announce(void) const;
	void	soloAnnounce(void) const;
	void	selectZombie(int n);

private:
	std::string _type;
	Zombie		*_horde;
	int 		_selected_zombie;
	int			_nbZombies;
	std::string	getRandomName(int len) const;

};

#endif // ZOMBIE_HORDE_HPP
