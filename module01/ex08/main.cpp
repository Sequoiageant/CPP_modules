/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:45:00 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 12:12:38 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Human jim;

	jim.action("meleeAttack", "joe");
	jim.action("rangedAttack", "jack");
	jim.action("intimidatingShout", "avrell");
	jim.action("noaction", "avrell");
	return 0;
}
