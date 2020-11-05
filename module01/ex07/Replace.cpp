#include "Replace.hpp"
#include <iostream>
#include <fstream>

Replace::Replace() {}
Replace::~Replace() {}

bool	Replace::setStrings(const char *s1, const char *s2)
{
	if (s1 && s2)
	{	
		this->_s1 = std::string(s1);
		this->_s2 = std::string(s2);
		if (this->_s1.length() == 0 || this->_s2.length() == 0)
		{
			std::cout << "[string s1] or [string s2] is empty" << std::endl;		
			return false;
		}
	}
	else
	{
		std::cout << "[string s1] or [string s2] is NULL" << std::endl;
		return false;
	}
	return true;
}

void	Replace::printStrings(void) const
{
	std::cout << this->_s1 << std::endl;
	std::cout << this->_s2 << std::endl;
}

bool	Replace::setFileStreams(std::string filename)
{
	this->setOutputFilename(filename);
	this->_ifs.open(filename, std::ifstream::in);
	if (this->_ifs.fail())
	{
		std::cerr << "The file [" << filename << "] can't be open." << std::endl;
		return false;
	}
	this->_ofs.open(this->_output_filename, std::ifstream::out | std::ifstream::trunc);
	if (this->_ofs.fail())
	{
		std::cerr << "The file [" << this->_output_filename << "] can't be open." << std::endl;
		return false;
	}
	return true;
}

std::string Replace::toupperString(std::string str) const
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

void	Replace::setOutputFilename(std::string filename)
{
	this->_output_filename = toupperString(filename) + ".replace";
}

bool	Replace::closeFileStreams(void)
{
	this->_ifs.close();
	if (this->_ifs.fail())
	{
		std::cerr << "Close ifs failed" << std::endl;
		return false;
	}
	this->_ofs.close();
	if (this->_ofs.fail())
	{
		std::cerr << "Close ofs failed" << std::endl;
		return false;
	}
	return true;
}

void			Replace::fillReplacementFile(void)
{
	std::string extracted;
	std::size_t lens1(0);
	std::size_t pos(0);

	lens1 = this->_s1.size();
	extracted = this->extractIfs();
	pos = extracted.find(this->_s1, 0);
	while(pos != std::string::npos)
	{
	    extracted.replace(pos, lens1, this->_s2);
	    pos = extracted.find(this->_s1, pos + 1);
	}
	this->_ofs << extracted;
}

std::string		Replace::extractIfs(void)
{
	std::string extracted;
	char		c;

	c = this->_ifs.get();
	while (this->_ifs.good())
	{
		extracted += c;
		c = this->_ifs.get();
	}
	this->_ifs.clear();
	return (extracted);
}

std::ifstream&	Replace::getIfs(void)
{
	return this->_ifs;
}

std::ofstream&	Replace::getOfs(void)
{
	return this->_ofs;
}
