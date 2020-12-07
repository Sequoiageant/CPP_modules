/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:18:35 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/07 15:12:14 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>

class Convert {

private:
	const char*		_cValue;
	std::string 	_value;
	double 			_rawValue;
	char			_charVal;
	int				_intVal;
	float			_floatVal;
	double			_doubleVal;
	std::string		_charStr;
	std::string		_intStr;
	std::string		_floatStr;
	std::string		_doubleStr;
	int				_precision;

	char	_detectType(void);
	bool	_isInt(std::string str);
	bool	_isChar(std::string str);
	bool	_isDouble(std::string str);
	bool	_isFloat(std::string str);
	int		_getPrecision(std::string str);
	void	_convertFromInt(void);
	void	_convertFromChar(void);
	void	_convertFromDouble(void);
	void	_convertFromFloat(void);
	void	_convertError(void);

	Convert(void);

public:
	Convert(const char *value);
	Convert(Convert const & copy);
	~Convert(void);

	// Convert & operator=(Convert const & rhs);

	void	doConversion(void);
};

std::ostream & operator<<(std::ostream & o, Convert const & rhs);

#endif // CONVERT_HPP
