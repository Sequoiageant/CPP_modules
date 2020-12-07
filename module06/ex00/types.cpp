/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:43:41 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/07 11:51:13 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <bitset>
#include <cstdlib>

std::string convertFloat(float value) {
  std::ostringstream o;
  if (!(o << value << "f"))
    return "";
  return o.str();
}
std::string convertDouble(double value) {
  std::ostringstream o;
  if (!(o << value))
    return "";
  return o.str();
}

void	print_bin(int nb)
{
	int	i;

	i = 0;
	printf("flag : [");
	while (i < 32)
	{
		if (i != 0 && i % 8 == 0)
			printf(".");
		if (nb & (1 << (31 - i)))
			printf("1");
		else
			printf("0");
		i++;
	}
	printf("]\n");
}

void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
            // std::cout << byte << " ";
        }
    }
}

int main(void)
{
	// std::cout << "Type of int: " << typeid(int).name() << std::endl;
	// std::cout << "Type of int*: " << typeid(int*).name() << std::endl;
	// std::cout << "Type of float: " << typeid(float).name() << std::endl;
	// std::cout << "Type of double: " << typeid(double).name() << std::endl;
	// std::cout << "Type of char: " << typeid(char).name() << std::endl;
	// std::cout << "Type of char*: " << typeid(char*).name() << std::endl;
	// std::cout << "Type of string: " << typeid(std::string).name() << std::endl;

	float f = 42.42f;
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);
	char c = static_cast<char>(f);

	std::cout << "Float " << f << std::endl;
	std::cout << "Int " << i << std::endl;
	std::cout << "Double " << d << std::endl;
	std::cout << "char size =1 " << static_cast<char>(33) << std::endl;
	std::cout << "char size >1 " << c << std::endl;

	double dd = 45.;
	std::cout << "Double . " << dd << std::endl;

	float ff = 45.f;
	std::cout << "Float .f " << dd << std::endl;

	char s[1]; s[0] = 'a';
	char sc = s[0];
	std::cout << "Char from str " << sc << std::endl;

	std::cout << "Convert Double:" << convertDouble(42.42) <<std::endl;
	std::cout << "Convert Float:" << convertFloat(42.42f) <<std::endl;

	std::cout << "Print precision with null decimal " << std::endl;

	float fff = 42.0f;
	std::cout << fff << " bitset:" << std::endl;
	std::cout << std::bitset<32>(fff)  << std::endl;
	printBits(sizeof(fff), &fff);
	std::cout << std::endl;


	const char *s2 = "2147483649";
	int at = atoi(s2);

	std::cout << s2 << std::endl;
	std::cout << at << std::endl;

	int max = 32;
	if (!(max >= 32 && max < 127))
		std::cout << " non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(max) << "'" << std::endl;

	 // std::cout << std::fixed << std::setprecision(3) << dd << std::endl;
	 // std::cout << std::fixed << std::setprecision(3) << static_cast<float>(dd) << std::endl;
	// std::cout << "Float with precision " << dd << std::endl;
	return 0;
}