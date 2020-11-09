/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:50:24 by julnolle          #+#    #+#             */
/*   Updated: 2020/11/09 17:54:40 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

const int	Fixed::_numbOfFracBits = 8;

Fixed::Fixed() : _fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const int_val)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixed_value = int_val << Fixed::_numbOfFracBits;
}

Fixed::Fixed(float const float_val)
{
    std::cout << "Float constructor called" << std::endl;
	this->_fixed_value = roundf(float_val * (1 << Fixed::_numbOfFracBits));
}

Fixed::Fixed(Fixed const & newFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_value = newFixed.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixed_value / (float)(1 << Fixed::_numbOfFracBits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixed_value / (1 << Fixed::_numbOfFracBits));
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixed_value = rhs.getRawBits();

    return *this;
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->_fixed_value > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->_fixed_value < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_fixed_value >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_fixed_value <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->_fixed_value == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_fixed_value != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	return Fixed(this->_fixed_value + rhs.getRawBits());
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return Fixed(this->_fixed_value - rhs.getRawBits());
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return Fixed(this->_fixed_value * rhs.getRawBits());
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return Fixed(this->_fixed_value / rhs.getRawBits());
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();

	return o;
}
