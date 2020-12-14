/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 10:05:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/14 10:31:54 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{

	std::vector<int> vec;

	vec.push_back(42);
	vec.push_back(12);
	vec.push_back(54);
	vec.push_back(3);
	
	for ( int elem : vec )
	{
		std::cout << elem << std::endl;
	} 
	return 0;
}