/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:41:58 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 11:53:33 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <exception>

template<typename T>
class Array {

private:
	T				*_tab;
	unsigned int	_size;

public:
	Array<T>(void) : _tab(new T[0]), _size(0) {}

	Array<T>(unsigned int n) : _tab(new T[n]()), _size(n) {}
	
	Array<T>(Array const & copy) : _tab(new T[copy._size]), _size(copy._size)
	{
		for (unsigned int i = 0; i < this->_size; ++i)
		{
			this->_tab[i] = copy._tab[i];
		}
	}
	
	~Array<T>(void) { delete [] this->_tab; };

	Array & operator=(Array const & rhs) {
		
		delete [] this->_tab;

		this->_size = rhs.size();
		this->_tab = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; ++i)
		{
			this->_tab[i] = rhs._tab[i];
		}
		return (*this);
	}

	T const & operator[](unsigned int idx) const {
		if (idx >= this->_size)
			throw OutOfLimitsException();

		return (this->_tab[idx]);
	}

	T & operator[](unsigned int idx) {
		if (idx >= this->_size)
			throw OutOfLimitsException();

		return (this->_tab[idx]);
	}

	unsigned int const& size() const { return this->_size; }


	class OutOfLimitsException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

};

template<typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs) {

	o.precision(1);
	o << setiosflags(std::ios::fixed);
	for (unsigned int i = 0; i < rhs.size(); ++i)
	{
		o << rhs[i] << " ";
	}
	o << std::endl;

	return o;
}

template<typename T>
const char* Array<T>::OutOfLimitsException::what() const throw()
{
	return ("Out of Range error");
}

#endif // ARRAY_HPP
