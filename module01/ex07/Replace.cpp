#include "Replace.hpp"
#include <iostream>

Replace::Replace()
{

}
Replace::~Replace() {}

bool	Replace::setStrings(const char *s1, const char *s2)
{
	if (s1 && s2)
	{	
		this->_s1 = std::string(s1);
		this->_s2 = std::string(s2);
		if (this->_s1.length() == 0 || this->_s2.length() == 0)
			return false;
	}
	else
		return false;
	return true;
}

void	Replace::printStrings(void) const
{
	std::cout << this->_s1 << std::endl;
	std::cout << this->_s2 << std::endl;
}

/*std::string Replace::convertString(char *str)
{
	return (std::string(str));
}*/