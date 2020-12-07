/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:28:45 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/07 15:35:16 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <limits>
// #include <cctype>


Convert::Convert(const char *value) : _cValue(value), _value(std::string(value))
{
	this->_rawValue = strtod(this->_cValue, NULL);
	this->_charVal = '*';
	this->_intVal = 0;
	this->_floatVal = 0.0f;
	this->_doubleVal = 0.0;
	this->_charStr = "impossible";
	this->_intStr = "impossible";
	this->_floatStr = "nanf";
	this->_doubleStr = "nan";
	this->_precision = 1;
}

Convert::Convert(Convert const & copy)// :  _cValue(copy._cValue), _value(copy._value)
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

int		Convert::_getPrecision(std::string str)
{
	int 	i = 0;
	int count = 1;

	while(str[i] != '.')
		i++;
	while(std::isdigit(str[i]))
		count++;
	return (count);
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

bool	Convert::_isFloat(std::string str)
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
	{
		if (this->_rawValue >= std::numeric_limits<int>::min() && this->_rawValue <= std::numeric_limits<int>::max() )
		{
			this->_intVal = atoi(this->_cValue);
			return ('i');
		}
	}
	else if (this->_isChar(this->_value))
	{
		this->_charVal = this->_value[0];
		return ('c');
	}
	else if (this->_isDouble(this->_value))
	{
		this->_doubleVal = strtod(this->_cValue, NULL);
		this->_precision = this->_getPrecision(this->_value);
		return ('d');
	}
	else if (this->_isFloat(this->_value))
	{
		if (this->_rawValue >= std::numeric_limits<float>::min() && this->_rawValue <= std::numeric_limits<float>::max() )
		{
			this->_floatVal = this->_rawValue;
			this->_precision = this->_getPrecision(this->_value);
			return ('f');	
		}
	}
	else
		return ('n');
	return ('o');
}

void	Convert::_convertFromInt(void)
{
	std::ostringstream o;
	std::ostringstream o1;
	std::ostringstream o2;
	std::ostringstream o3;


	if (!(this->_intVal >= 32 && this->_intVal < 127))
		this->_charStr = "Non displayable";
	else
	{
		this->_charVal = static_cast<char>(this->_intVal);;
		o3 << "'" << this->_charVal << "'";
		this->_charStr = o3.str();
	}

	o << this->_intVal;
	this->_intStr = o.str();

	this->_floatVal = static_cast<float>(this->_intVal);
	o1 << std::fixed << std::setprecision(this->_precision) << this->_floatVal << "f";
	this->_floatStr = o1.str();

	this->_doubleVal = static_cast<double>(this->_intVal);
	o2 << std::fixed << std::setprecision(this->_precision) << this->_doubleVal;
	this->_doubleStr = o2.str();
}

void	Convert::_convertFromChar(void)
{
	std::ostringstream o;
	std::ostringstream o1;
	std::ostringstream o2;

	this->_charStr = "'" + this->_value + "'";

	this->_intVal = static_cast<int>(this->_charVal);
	o << this->_intVal;
	this->_intStr = o.str();

	this->_floatVal = static_cast<float>(this->_charVal);
	o1 << std::fixed << std::setprecision(this->_precision) << this->_floatVal << "f";
	this->_floatStr = o1.str();

	this->_doubleVal = static_cast<double>(this->_charVal);
	o2 << std::fixed << std::setprecision(this->_precision) << this->_doubleVal;
	this->_doubleStr = o2.str();
}

void	Convert::_convertFromDouble(void)
{
	std::ostringstream o;
	std::ostringstream o1;
	std::ostringstream o2;
	std::ostringstream o3;

	o << std::fixed << std::setprecision(this->_precision) << this->_doubleVal;
	this->_doubleStr = o.str();

	this->_floatVal = static_cast<float>(this->_doubleVal);
	o1 << std::fixed << std::setprecision(this->_precision) << this->_floatVal << "f";
	this->_floatStr = o1.str();

	this->_intVal = static_cast<int>(this->_doubleVal);
	o2 << this->_intVal;
	this->_intStr = o2.str();

	if (!(this->_intVal >= 32 && this->_intVal < 127))
		this->_charStr = "Non displayable";
	else
	{
		this->_charVal = static_cast<char>(this->_doubleVal);;
		o3 << "'" << this->_charVal << "'";
		this->_charStr = o3.str();
	}
}

void	Convert::_convertFromFloat(void)
{
	std::ostringstream o;
	std::ostringstream o1;
	std::ostringstream o2;
	std::ostringstream o3;

	o << std::fixed << std::setprecision(this->_precision) << this->_floatVal << "f";
	this->_floatStr = o.str();

	this->_doubleVal = static_cast<double>(this->_floatVal);
	o1 << std::fixed << std::setprecision(this->_precision) << this->_doubleVal;
	this->_doubleStr = o1.str();

	this->_intVal = static_cast<int>(this->_floatVal);
	o2 << this->_intVal;
	this->_intStr = o2.str();

	if (!(this->_intVal >= 32 && this->_intVal < 127))
		this->_charStr = "Non displayable";
	else
	{
		this->_charVal = static_cast<char>(this->_floatVal);;
		o3 << "'" << this->_charVal << "'";
		this->_charStr = o3.str();
	}
}

void	Convert::_convertError(void)
{
	if (this->_value == "-inf" || this->_value == "+inf" || this->_value == "-inff" || this->_value == "+inff")
	{
		if (this->_value[0] == '-')
		{
			this->_floatStr = "-inff";
			this->_doubleStr = "-inf";			
		}
		else
		{
			this->_floatStr = "+inff";
			this->_doubleStr = "+inf";			
		}
	}
}

void	Convert::doConversion(void)
{
	char type;
	static char const types[5] = {'i', 'c', 'd', 'f', 'n'};
	void (Convert::*conv[5])(void) = {&Convert::_convertFromInt, &Convert::_convertFromChar, &Convert::_convertFromDouble, &Convert::_convertFromFloat, &Convert::_convertError};

	type = this->_detectType();
	// this->_convertFromInt();

	for (int i = 0; i < 5; ++i)
	{
		if (type == types[i])
			(this->*conv[i])();
	}

	std::cout << "type: " << type << std:: endl;
	std::cout << "_precision: " << this->_precision << std:: endl;
	std::cout << "Input String: " << this->_value << std:: endl;
	std::cout << "char: " << this->_charStr << std:: endl;
	std::cout << "int: " << this->_intStr << std:: endl;
	std::cout << "float: " << this->_floatStr << std:: endl;
	std::cout << "double: " << this->_doubleStr << std:: endl;

	return;
}
