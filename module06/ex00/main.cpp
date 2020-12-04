/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:00:07 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/04 16:11:48 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char const **av)
{
	if (ac == 2)
	{
		Convert convert(av[1]);
		convert.doConversion();
	}
	else
		std::cerr << "The program needs one parameter to run" << std::endl;
	return 0;
}