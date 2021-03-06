/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:41:36 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/09 17:39:53 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

private:
	int					_fixed_value;
	static const int	_numbOfFracBits;

public:
	Fixed(void);
	Fixed(Fixed const & newFixed);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed &	operator=(Fixed const & rhs);
};

#endif // FIXED_HPP
