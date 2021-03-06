/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:36:00 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/16 09:23:38 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span {

private:
	std::vector<int>	_nbrs;
	unsigned int		_size;
	unsigned int		_actualSize;
	unsigned int		_findSpan(int i, std::vector<int>::iterator, std::vector<int>::iterator);
	Span(void);

public:
	Span(unsigned int N);
	Span(Span const & copy);
	~Span(void);
	Span& operator=(Span const & rhs);

	void			addNumber(const int& i);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);

	std::vector<int> getNbrs(void) const;

	template<typename T>
	void addNumber(T first, T last) {

		while(first != last)
		{
			this->addNumber(*first);
			++first;
		}
	}	

	class outOfRangeException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class noSpanFoundException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif // SPAN_HPP
