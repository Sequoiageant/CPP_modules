#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>

class Replace
{
public:
	Replace();
	~Replace();
	bool	setStrings(const char *s1, const char *s2);
	// void	openStreams(void);
	void	printStrings(void) const;

private:	
	// std::ifstream	_ifs;
	// std::ofstream	_ofs;
	std::string		_s1;
	std::string		_s2;
	// std::string		convertString(char *str);

};

#endif // REPLACE_HPP
