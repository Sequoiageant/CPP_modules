/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:44:42 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 12:16:23 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>

#define NB_DST 2

Logger::Logger() : _name("Over_logging.log")
{
	return;
}

Logger::~Logger() {}

std::string	Logger::getName(void) const
{
	return this->_name;
}

void	Logger::logToConsole(std::string const & message)
{
	std::cout << this->makeLogEntry(message) << std::endl;
}

void	Logger::logToFile(std::string const & message)
{
	std::ofstream ofs(this->_name, std::ofstream::out | std::ofstream::app);

	if (!ofs.fail())
	{
		ofs << this->makeLogEntry(message) << std::endl;
		std::cout << "message appended to [" << this->_name << "]" << std::endl;
	}
	else
		std::cout << "logFile [" << this->_name << "] cannot be created or appended" << std::endl;
	ofs.close();
}

void	Logger::log(std::string const & dest, std::string const & message)
{
	typedef	void		(Logger::*t_log)(std::string const &);
	static std::string	logTo[NB_DST] = {"console", "file"};
	static t_log		func[NB_DST] = {&Logger::logToConsole, &Logger::logToFile};
	int	i(0);

	while (i < NB_DST)
	{
		if (logTo[i] == dest)
		{
			(this->*func[i])(message);
			return;
		}
		i++;
	}
	std::cout << "The message destination can only be 'console' or 'file'" << std::endl;
}

std::string	Logger::formatDate() const
{
	time_t				timestamp;
	tm					*time;
	std::stringstream	ss;

	std::time(&timestamp);
	time = localtime(&timestamp);

	ss << std::setfill('0')
	<< time->tm_year + 1900
	<< std::setw(2) << time->tm_mon + 1
	<< std::setw(2) << time->tm_mday << "_"
	<< std::setw(2) << time->tm_hour
	<< std::setw(2) << time->tm_min
	<< std::setw(2) << time->tm_sec;
	return (ss.str());
}

std::string	Logger::makeLogEntry(std::string message) const
{
	std::string log_message;

	log_message = "[" + this->formatDate() + "] " + message;
	return (log_message);
}
