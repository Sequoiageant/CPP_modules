#include "Replace.hpp"
#include <iostream>

int main(int ac, char const **av)
{
	Replace file;

	if (ac == 4)
	{
		if (file.setFileStreams(av[1]) == false)
			return (1);
		if (file.setStrings(av[2], av[3]) == false)
			return (1);
		file.fillReplacementFile();
		if (file.closeFileStreams() == false)
			return (1);
		// file.printStrings();
	}
	else
	{
		std::cerr << "The program needs 3 arguments: [filename] [string] [string]" << std::endl;
		return (1);
	}
	return (0);
}

/*int main(int ac, char const **av)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string	tmp;
	char c;

	if (ac == 4)
	{
		ifs.open(av[1]);
		c = ifs.get();
		while (ifs.good()) {
			tmp += c;
			c = ifs.get();
		}
		std::cout << tmp << "a" << std::endl;
		ofs.open("output_file");
		ofs << tmp;

		ifs.close();
		ofs.close();
	}
	else
		std::cout << "Need 3 arguments: [filename] [string] [string]" << std::endl;
	return 0;
}*/