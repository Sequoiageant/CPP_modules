/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:16:02 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/07 11:50:22 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <fstream>

class Replace
{
public:
	Replace();
	~Replace();
	bool					setStrings(const char *s1, const char *s2);
	bool					setFileStreams(std::string filename);
	void					printStrings(void) const;
	bool					closeFileStreams(void);
	void					fillReplacementFile(void);
	std::ifstream&			getIfs(void);
	std::ofstream&			getOfs(void);

private:	
	std::ifstream	_ifs;
	std::ofstream	_ofs;
	std::string		_s1;
	std::string		_s2;
	std::string		_output_filename;
	void			setOutputFilename(std::string filename);
	std::string		toupperString(std::string str) const;
	std::string		extractIfs(void);
};

#endif // REPLACE_HPP
