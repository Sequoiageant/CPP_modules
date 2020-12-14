/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:36:00 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/14 18:20:16 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N), _actualSize(0)
{
	return;
}

Span::Span(Span const & copy)
{
	*this = copy;
}

Span::~Span(void)
{
	return;
}

Span& Span::operator=(Span const & rhs)
{
	this->_nbrs = rhs._nbrs;
	this->_size = rhs._size;
	this->_size = rhs._actualSize;
	return (*this);
}

void			Span::addNumber(const int& i)
{
	if (this->_actualSize != this->_size)
	{
		this->_nbrs.push_back(i);
		this->_actualSize++;
	}
	else
		throw Span::outOfRangeException();
}

unsigned int	Span::shortestSpan(void)
{
	return (0);
}

unsigned int	Span::longestSpan(void)
{
	return (0);
}

std::vector<int> Span::getNbrs(void) const
{
	return (this->_nbrs);
}

/*std::ostream & operator<<(std::ostream & o, Span const & rhs)
{
	o << 

}*/

const char* Span::outOfRangeException::what() const throw()
{
	return ("Container is full !");
}

const char* Span::noSpanFoundException::what() const throw()
{
	return ("No span can be found !");
}
