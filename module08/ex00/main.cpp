/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:47:51 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/14 16:07:12 by julnolle         ###   ########.fr       */
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
	std::vector<int> dec;


	vec.push_back(42);
	vec.push_back(12);
	vec.push_back(0);
	vec.push_back(54);
	vec.push_back(3);

	// std::vector<int>::iterator it = vec.begin();
	// std::vector<int>::iterator ite = vec.end();
	// std::cout << &it << std::endl;
	// std::cout << &ite << std::endl;
	// if (it.pointer == NULL)
	// 	std::cout << "it NULL" << std::endl;


	std::for_each(vec.begin(), vec.end(), displayInt);
	std:: cout << std::endl;

	std:: cout << std::boolalpha << "12: " << *::easyfindI(vec, 12) << std::endl;
	std:: cout << std::boolalpha << "30: " << *::easyfindI(vec, 30) << std::endl;


	std:: cout << "----> list <---- "<< std::endl;
	std::list<int> lst;

	lst.push_back(42);
	lst.push_back(12);
	lst.push_back(0);
	lst.push_back(54);
	lst.push_back(3);

	std::for_each(lst.begin(), lst.end(), displayInt);
	std:: cout << std::endl;

	std:: cout << std::boolalpha << "12: " << *::easyfindI(lst, 12) << std::endl;
	std:: cout << std::boolalpha << "30: " << *::easyfindI(lst, 30) << std::endl;

	std:: cout << "----> deque <---- "<< std::endl;
	std::deque<int> dq;

	dq.push_back(42);
	dq.push_back(12);
	dq.push_back(0);
	dq.push_back(54);
	dq.push_back(3);

	std::for_each(dq.begin(), dq.end(), displayInt);
	std:: cout << std::endl;

	std:: cout << std::boolalpha << "12: " << *::easyfindI(dq, 12) << std::endl;
	std:: cout << std::boolalpha << "30: " << *::easyfindI(dq, 30) << std::endl;

	return 0;
}