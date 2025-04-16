/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:08 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/16 15:25:34 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: _num(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	_num = copy.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	if (this == & copy)
	{
		_num = copy.getRawBits();
		return (*this);
	}
	std::cout << "Copy assignment operator calle\n";
	_num = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_num = raw << 1;
}
