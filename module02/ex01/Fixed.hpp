/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:43:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/09 16:38:50 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:
	int					_fixed_value;
	static const int	_numbOfFracBits;

public:
	Fixed(void);
	Fixed(const int int_val);
	Fixed(const float float_val);
	Fixed(Fixed const & newFixed);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
	Fixed & operator=(Fixed const & rhs);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif // FIXED_HPP
