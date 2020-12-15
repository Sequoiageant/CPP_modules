/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:36:00 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/15 11:49:27 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <cstdlib>

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
	if (this->_actualSize < this->_size)
	{
		this->_nbrs.push_back(i);
		this->_actualSize++;
	}
	else
		throw Span::outOfRangeException();
}

void			Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	while(first != last)
	{
	    this->_nbrs.push_back(*first);
		this->_actualSize++;
	    ++first;
	}
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_actualSize < 2)
		throw noSpanFoundException();

	unsigned int span = 0;
	unsigned int minSpan = 1000;

	for (unsigned int i = 0; i < this->_actualSize; ++i)
	{
		span = this->_findSpan(this->_nbrs[i], this->_nbrs.begin() + i + 1, this->_nbrs.end());
		if (span < minSpan)
			minSpan = span;
	}

	return (minSpan);
}

unsigned int	Span::longestSpan(void)
{
	if (this->_actualSize < 2)
		throw noSpanFoundException();

	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	min =  min_element(this->_nbrs.begin(), this->_nbrs.end());
	max =  max_element(this->_nbrs.begin(), this->_nbrs.end());
	
	return ((*max) - (*min));
}

unsigned int	Span::_findSpan(int i, std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	unsigned int span = 0;
	unsigned int minSpan = 1000;

	// std::cout << "i: " << i << std::endl;
	while(first != last)
	{
		span = abs(i - *first);
		// std::cout << span << std::endl;
		if (span < minSpan)
			minSpan = span;
		++first;
	}

	return (minSpan);
}


std::vector<int> Span::getNbrs(void) const
{
	return (this->_nbrs);
}

const char* Span::outOfRangeException::what() const throw()
{
	return ("Container is full !");
}

const char* Span::noSpanFoundException::what() const throw()
{
	return ("No span can be found !");
}
