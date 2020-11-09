/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:33:39 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 12:16:14 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

int main(void)
{
	Logger log;

	log.log("console", "I am the Console message");
	log.log("file", "I am the first message");
	std::this_thread::sleep_for (std::chrono::seconds(1));
	log.log("file", "I am the second message");
	std::this_thread::sleep_for (std::chrono::seconds(1));
	log.log("file", "I am the third message");
}
