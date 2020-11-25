/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:04:19 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/24 17:44:32 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy {

private:

protected:
	Enemy(void);
	int			_hp;
	std::string _type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & copy);
	virtual ~Enemy(void);
	Enemy& operator=(Enemy const & rhs);
	std::string const	getType(void) const;
	int					getHP(void) const;
	virtual void		takeDamage(int);
};


std::ostream & operator<<(std::ostream & o, Enemy const & rhs);

#endif // ENEMY_HPP
