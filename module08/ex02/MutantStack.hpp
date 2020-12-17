/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:02:50 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/17 11:49:23 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <list>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack(void) : std::stack<T>() {}
	MutantStack(MutantStack const & copy) : std::stack<T>(copy) {}
	~MutantStack(void) {}
	MutantStack& operator=(MutantStack const & rhs) {
		*this = rhs;
		return (*this);
	}

/*	bool			empty() const;
	unsigned int	size() const;
	T&				top();
	const T&		top() const;
	void 			push(const T& val);
	void			pop();
*/

	
	class iterator : public std::iterator<std::input_iterator_tag, typename std::deque<T>::iterator> {

	private:
		T *p;

	public:
		iterator(void);
		iterator(T* x) : p(x) {}
		iterator(const iterator& copy) : p(copy.p) {}
		iterator& operator++() {--p;return *this;}
		iterator operator++(int) {iterator tmp(*this); operator++(); return tmp;}
		iterator& operator--() {++p;return *this;}
		iterator operator--(int) {iterator tmp(*this); operator--(); return tmp;}
		bool operator==(const iterator& rhs) const {return p==rhs.p;}
		bool operator!=(const iterator& rhs) const {return p!=rhs.p;}
		T& operator*() {return *p;}
		~iterator(void) {}
		iterator& operator=(iterator const & rhs) {
			*this = rhs;
			return (*this);
		}

	};
	
	iterator begin(void) { return iterator(&this->top()); }
	iterator end(void) { return iterator((&this->top() - this->size())); }
	
};

template<typename T>
std::ostream & operator<<(std::ostream & o, MutantStack<T> const & rhs);

#endif // MUTANTSTACK_HPP
