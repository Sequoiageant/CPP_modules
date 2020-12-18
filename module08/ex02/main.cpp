/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:02:50 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/18 11:30:29 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <algorithm>
#include <stack>

int main()
{
	std::cout << std::endl << "------mstack of ints (given main): ------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top(): " << mstack.top() << std::endl;

	std::cout << "mstack.size() before pop: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "mstack.size() after pop: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(41);

	std::cout << "mstack.top() before ++: " << mstack.top()++ << std::endl;
	std::cout << "mstack.top() after ++: " << mstack.top() << std::endl;

	std::cout << std::endl << "mstack display with iterators:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl << "stack copied from mstack:" << std::endl;
	std::stack<int> s(mstack);
	std::cout << "s.top(): " << s.top() << std::endl;

	MutantStack<int> mstack2;
	mstack2.push(42);
	std::cout << std::endl << std::boolalpha << "is mstack2 empty: " << mstack2.empty() << std::endl;
	std::cout << "mstack2.size() before pop: " << mstack2.size() << std::endl;
	mstack2.pop();
	std::cout << std::endl << std::boolalpha << "is mstack2 empty: " << mstack2.empty() << std::endl;
	std::cout << "mstack2.size() before pop: " << mstack2.size() << std::endl;


	

	std::cout << std::endl << "------mstack of char: ------" << std::endl;
	MutantStack<char> mstack3;
	mstack3.push(40);
	mstack3.push(126);
	std::cout << "mstack3.top(): " << mstack3.top() << std::endl;

	std::cout << "mstack3.size() before pop: " << mstack3.size() << std::endl;
	mstack3.pop();
	std::cout << "mstack3.size() after pop: " << mstack3.size() << std::endl;

	mstack3.push(37);
	mstack3.push(100);
	mstack3.push(120);
	mstack3.push(41);

	std::cout << "mstack3.top() before ++: " << mstack3.top()++ << std::endl;
	std::cout << "mstack3.top() after ++: " << mstack3.top() << std::endl;

	std::cout << std::endl << "mstack3 display with iterators:" << std::endl;
	MutantStack<char>::iterator it3 = mstack3.begin();
	MutantStack<char>::iterator ite3 = mstack3.end();

	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}	

	std::cout << std::endl << "------mstack of std::string: ------" << std::endl;
	MutantStack<std::string> mstack4;
	mstack4.push("un vilain chasseur");
	mstack4.push("soudain ils croisent");
	mstack4.push("vont aux bois");
	mstack4.push("et Renee");
	mstack4.push("Michel");
	std::cout << "mstack4.top(): " << mstack4.top() << std::endl;


	std::cout << std::endl << "mstack4 display with iterators:" << std::endl;
	MutantStack<std::string>::iterator it4 = mstack4.begin();
	MutantStack<std::string>::iterator ite4 = mstack4.end();

	while (it4 != ite4)
	{
		std::cout << *it4 << std::endl;
		++it4;
	}

	std::cout << std::endl << "------list same as mstack: ------" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << "lst.back(): " << lst.back() << std::endl;

	std::cout << "lst.size() before pop: " << lst.size() << std::endl;
	lst.pop_back();
	std::cout << "lst.size() after pop: " << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	lst.push_back(41);

	std::cout << "lst.back() before ++: " << lst.back()++ << std::endl;

	std::cout << std::endl << "lst display with iterators:" << std::endl;
	std::list<int>::iterator first = lst.begin();
	std::list<int>::iterator last = lst.end();
	++first;
	--first;
	while (first != last)
	{
		std::cout << *first << std::endl;
		++first;
	}

	return 0;
}
