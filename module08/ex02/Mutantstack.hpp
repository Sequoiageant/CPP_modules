/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:02:50 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/15 16:35:44 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <list>
# include <stack>

template<typename T>
class Mutantstack : public std::stack {

private:
	std::list<T>			_list;
	unsigned int			_size;

public:
	Mutantstack(void);
	Mutantstack(Mutantstack const & copy);
	~Mutantstack(void);
	Mutantstack& operator=(Mutantstack const & rhs);

	bool			empty() const;
	unsigned int	size() const;
	T&				top();
	const T&		top() const;
	void 			push(const T& val);
	void			pop();

	
	class Iterator : public std::iterator<std::input_iterator_tag, T> {
	
	private:
		T *p;
	
	public:
		Iterator(void);
		Iterator(T* x) :p(x) {}
		Iterator(const Iterator& copy) : p(copy.p) {}
		Iterator& operator++() {++p;return *this;}
		Iterator operator++(int) {Iterator tmp(*this); operator++(); return tmp;}
		bool operator==(const Iterator& rhs) const {return p==rhs.p;}
		bool operator!=(const Iterator& rhs) const {return p!=rhs.p;}
		int& operator*() {return *p;}
		~Iterator(void) {}
		Iterator& operator=(Iterator const & rhs) {return p==rhs.p;}
  		
  		// Iterator& begin(void);
  		// Iterator& end(void);


	};
	
	
};

std::ostream & operator<<(std::ostream & o, mutantstack const & rhs);

#endif // MUTANTSTACK_HPP
