/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:08 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/16 18:03:06 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: _num(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const n)
: _num(n << _bit)
{;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const n)
: _num(roundf(n * ( 1 << _bit)))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	_num = copy.getRawBits();
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& copy)
{
	if (this == & copy)
		return (*this);
	_num = copy.getRawBits();
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

int	Fixed::getRawBits(void) const
{
	return (this->_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_num= raw;
}

float	Fixed::toFloat(void) const
{
	return (float)_num / (1 << _bit);
}

int	Fixed::toInt(void) const
{
	return (_num >> _bit);
}
