/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:33:55 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:33:59 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str("HI THIS IS BRAIN");
	
	std::string* p = &str;
	std::string& ref = str;

	std::cout << "Pointeur: " << *p << std::endl;
	std::cout << "Ref: " << ref << std::endl;
	return 0;
}
