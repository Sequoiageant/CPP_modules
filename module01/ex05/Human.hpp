/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:53:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:38:34 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human
{

public:
	Human();
	~Human();
	std::string identify(void) const;
	const Brain& getBrain(void) const;

private:
	const Brain _brain;
};

#endif // HUMAN_HPP
