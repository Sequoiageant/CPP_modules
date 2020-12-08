/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:46:59 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/08 17:48:28 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

struct Data
{
	std::string	s1;
	int			n;
	std::string s2;
};

int	ft_strlen(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	return (len);
}

std::string	getRandomStr(int len)
{
	std::string str;
	const std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for (int i = 0; i < len; ++i)
	{
		str += alphabet[rand() % 62];
	}
	return (str);
}

void *serialize(void)
{
	srand (time(NULL));
	std::stringstream ss;
	std::string s1 = getRandomStr(8);
	std::string s2 = getRandomStr(8);
	int	a = rand() % 200;

	ss << s1 << a << s2;
	
	int len = ss.str().length();
	char *str = new char[len + 1];
	str[len] = '\0';
	ss >> str;

	void *p = str;
	return (p);
}

Data * deserialize(void * raw)
{
	Data *data = new Data;
	std::stringstream ss;

	char *str = reinterpret_cast<char *>(raw);
	int len = ft_strlen(str);
	std::cout << "str: " << str << std::endl
	<< "len: " << len << std::endl << std::endl;

	data->s1 = std::string(str, 8);
	data->s2 = std::string(str + (len - 8), 8);
	
	std::string tmp(str + 8, (len - 16));
	ss << tmp;
	ss >> data->n;

	delete [] str;
	return (data);
}

int main(void)
{
	Data *data;

	void *p = serialize();
	data 	= deserialize(p);

	std::cout << "data->s1: " << data->s1 << std::endl;
	std::cout << "data->s2: " << data->s2 << std::endl;
	std::cout << "data->n: " << data->n << std::endl;

	delete data;
	return 0;
}
