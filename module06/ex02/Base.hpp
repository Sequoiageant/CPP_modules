/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:03:54 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/09 10:11:59 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <string>
# include <iostream>

class Base {

public:

	virtual ~Base(void) {};

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);

#endif // BASE_HPP
