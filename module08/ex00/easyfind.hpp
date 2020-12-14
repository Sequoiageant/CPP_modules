/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:47:51 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/14 19:24:10 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, const int& i)
{
	typename T::iterator p;
	typename T::iterator end = container.end();

	p = find(container.begin(), end, i);
	if (p != end)
		return (p);
	else
		return (end);
}

/*template<typename T>
bool easyfind(T& container, const int& val)
{
	typename T::const_iterator first = container.begin();
	typename T::const_iterator last = container.end();

	while(first != last) {
	    if (*first == val)
	    	return (true);
	    ++first;
	}
	return (false);
}

template<typename T>
bool easyfindF(T& container, const int& i)
{
	typename T::const_iterator p;
	typename T::iterator end = container.end();

	p = find(container.begin(), end, i);
	if (p != end)
		return (true);
	else
		return (false);
}*/
#endif // EASYFIND_HPP
