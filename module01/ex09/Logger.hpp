/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:15:47 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 12:16:18 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class Logger
{

public:
	Logger();
	~Logger();
	void		log(std::string const & dest, std::string const & message);
	std::string	getName(void) const;

private:
	std::string	_name;
	void		logToConsole(std::string const & message);
	void		logToFile(std::string const & message);
	std::string	makeLogEntry(std::string message) const;
	std::string	formatDate(void) const;
};

#endif // LOGGER_HPP
