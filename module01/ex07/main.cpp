/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:49:54 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:50:06 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int main(int ac, char const **av)
{
	Replace file;

	if (ac == 4)
	{
		if (file.setFileStreams(av[1]) == false)
			return (1);
		if (file.setStrings(av[2], av[3]) == false)
			return (1);
		file.fillReplacementFile();
		if (file.closeFileStreams() == false)
			return (1);
		// file.printStrings();
	}
	else
	{
		std::cerr << "The program needs 3 arguments: [filename] [string] [string]" << std::endl;
		return (1);
	}
	return (0);
}
