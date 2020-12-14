/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:47:51 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/14 19:23:41 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

void displayInt(int i)
{
	std::cout << i << " ";
}

int main(void)
{
	std:: cout << "----> vector <---- "<< std::endl;
	std::vector<int> vec;

	vec.push_back(12);
	vec.push_back(42);
	vec.push_back(0);
	vec.push_back(54);
	vec.push_back(3);

	std::for_each(vec.begin(), vec.end(), displayInt);
	std:: cout << std::endl;
	
	std::vector<int>::const_iterator ite = vec.end();

	if (::easyfind(vec, 42) != ite)
		std:: cout << std::boolalpha << "Found: " << *::easyfind(vec, 42) << std::endl;
	else
		std:: cout << "not found" << std::endl;
	if (::easyfind(vec, 30) != ite)
		std:: cout << std::boolalpha << "Found: " << *::easyfind(vec, 30) << std::endl;
	else
		std:: cout << "not found" << std::endl;



	std:: cout << "----> list <---- "<< std::endl;
	std::list<int> lst;

	lst.push_back(12);
	lst.push_back(42);
	lst.push_back(0);
	lst.push_back(54);
	lst.push_back(3);

	std::for_each(lst.begin(), lst.end(), displayInt);
	std:: cout << std::endl;

	std::list<int>::const_iterator iteL = lst.end();

	if (::easyfind(lst, 42) != iteL)
		std:: cout << std::boolalpha << "Found: " << *::easyfind(lst, 42) << std::endl;
	else
		std:: cout << "not found" << std::endl;
	if (::easyfind(lst, 30) != iteL)
		std:: cout << std::boolalpha << "Found: " << *::easyfind(lst, 30) << std::endl;
	else
		std:: cout << "not found" << std::endl;

	std:: cout << "----> deque <---- "<< std::endl;
	std::deque<int> dq;

	dq.push_back(12);
	dq.push_back(42);
	dq.push_back(0);
	dq.push_back(54);
	dq.push_back(3);

	std::for_each(dq.begin(), dq.end(), displayInt);
	std:: cout << std::endl;

	std::deque<int>::const_iterator iteDq = dq.end();

	if (::easyfind(dq, 42) != iteDq)
		std:: cout << std::boolalpha << "Found: " << *::easyfind(dq, 42) << std::endl;
	else
		std:: cout << "not found" << std::endl;
	if (::easyfind(dq, 30) != iteDq)
		std:: cout << std::boolalpha << "Found: " << *::easyfind(dq, 30) << std::endl;
	else
		std:: cout << "not found" << std::endl;

	return 0;
}