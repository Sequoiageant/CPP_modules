/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:37:17 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:04:10 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

class Pony {

public:
	Pony(std::string name, std::string color, std::string type);
	~Pony();
	void		displayColor(void) const;

private:
	static int		_nbPony;

	std::string		_name;
	std::string		_color;
	std::string		_type;
};

#endif // PONY_HPP
