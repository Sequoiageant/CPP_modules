/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:46:59 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/09 13:05:19 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <cstring>
struct Data
{
	std::string	s1;
	int			n;
	std::string s2;
};

/*int	ft_strlen(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	return (len);
}
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n-- > 0)
		((unsigned char *)dst)[n] = ((const unsigned char *)src)[n];
	return (dst);
}

char	*getRandomStr(int len)
{
	char *str = new char[len + 1];
	const std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for (int i = 0; i < len + 1; ++i)
	{
		str[i] = alphabet[rand() % 62];
	}
	str[len] = '\0';
	return (str);
}
/*std::string	getRandomStr(int len)
{
	std::string str;
	const std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for (int i = 0; i < len; ++i)
	{
		str += alphabet[rand() % 62];
	}
	return (str);
}
*/
void *serialize(void)
{
	srand (time(NULL));
	char *s1 = getRandomStr(8);
	char *s2 = getRandomStr(8);
	int	i = rand() % 200;

	std::cout << "s1: " << s1 << std::endl;
	std::cout << "s2: " << s2 << std::endl;
	std::cout << "i: " << i << std::endl;

	char *dst = new char[8 + sizeof(int) + 8];
	char *tmp = dst;

	ft_memcpy(tmp, s1, 8);
	tmp += 8;
	ft_memcpy(tmp, &i, sizeof(int));
	tmp += sizeof(int);
	ft_memcpy(tmp, s2, 8);
		
	void *p = dst;
	delete [] s1;
	delete [] s2;
	return (p);
}/*
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
}*/

Data * deserialize(void * raw)
{
	Data *data = new Data;
	// std::stringstream ss;

	char *str = reinterpret_cast<char *>(raw);

	data->s1 = std::string(str, 8);
	data->s2 = std::string(str + 12, 8);	

	int* i = reinterpret_cast<int *>(str + 8);
	data->n = *i;
	
	// std::string tmp(str + 8, (len - 16));
	// ss << tmp;
	// ss >> data->n;

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
