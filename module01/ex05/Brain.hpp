/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:45:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:36:28 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{

public:
	Brain();
	~Brain();
	int			getNbOfNeurons() const;
	std::string	identify() const;

private:
	int	_nbOfNeurons;
};

#endif // BRAIN_HPP
