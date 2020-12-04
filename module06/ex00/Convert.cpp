/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:28:45 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/04 17:01:56 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(const char *value) : _value(std::string(value))
{
	this->_charVal = '*';
	this->_intVal = 0;
	this->_floatVal = 0;
	this->_doubleVal = 0;
	this->_charStr = "impossible";
	this->_intStr = "impossible";
	this->_floatStr = "nanf";
	this->_doubleStr = "nan";

}

Convert::Convert(Convert const & copy) :  _value(copy._value)
{
	*this = copy;
}

Convert::~Convert(void)
{
	return;
}

// Convert & Convert::operator=(Convert const & rhs)
// {

// }

bool	Convert::_parseString(void)
{

	return (true);
}

bool	Convert::_isInt(std::string str)
{
	int	i = 0;
	
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	Convert::_isChar(std::string str)
{
	if (str.size() == 1)
	{
		if (std::isalpha(str[0]))
			return (true);
	}
	return (false);
}

bool	Convert::_isDouble(std::string str)
{
	int	i = 0;
	int	count = 0;

	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!std::isdigit(str[i]) && str[i] != '.')
			return (false);
		if (str[i] == '.')
			count++;
		i++;
	}
	if (count == 1)
		return (true);
	return (false);
}

bool	Convert::_is_Float(std::string str)
{
	int	i = 0;
	int	count = 0;

	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
			return (false);
		if (str[i] == '.')
			count++;
		i++;
	}
	if (count == 1 && str[i - 1] == 'f')
		return (true);
	return (false);
}

char	Convert::_detectType(void)
{
	// C'est moche ! Trouver un autre moyen que if/else if/else !?
	if (this->_isInt(this->_value))
		return ('i');
	else if (this->_isChar(this->_value))
		return ('c');
	else if (this->_isDouble(this->_value))
		return ('d');
	else if (this->_is_Float(this->_value))
		return ('f');
	else
		return ('n');
}

void	Convert::doConversion(void)
{
	char type;

	type = this->_detectType();

	std::cout << "type: " << type << std:: endl;

	return;
}
