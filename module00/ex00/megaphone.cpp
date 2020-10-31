#include <string>
#include <iostream>
  
std::string ft_toupper(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			std::cout << ft_toupper(av[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
