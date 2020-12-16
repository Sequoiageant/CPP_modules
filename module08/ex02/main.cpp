/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:02:50 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/16 16:02:27 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <algorithm>
#include <stack>

int main()
{
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



	std::cout << std::endl << "------list same as mstack: ------" << std::endl;
	std::list<int> lst;
	lst.push_front(5);
	lst.push_front(17);
	std::cout << "lst.front(): " << lst.front() << std::endl;

	std::cout << "lst.size() before pop: " << lst.size() << std::endl;
	lst.pop_front();
	std::cout << "lst.size() after pop: " << lst.size() << std::endl;

	lst.push_front(3);
	lst.push_front(5);
	lst.push_front(737);
	lst.push_front(0);
	lst.push_front(41);

	std::cout << "lst.front() before ++: " << lst.front()++ << std::endl;

	std::cout << std::endl << "lst display with iterators:" << std::endl;
	std::list<int>::iterator first = lst.begin();
	std::list<int>::iterator last = lst.end();
	++it;
	--it;
	while (first != last)
	{
		std::cout << *first << std::endl;
		++first;
	}


	return 0;
}
