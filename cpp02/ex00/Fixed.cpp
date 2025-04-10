/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:08 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/10 11:43:31 by sjossain         ###   ########.fr       */
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
	_num = copy._num;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	if (this == & copy)
		return (*this);
	_num = copy._num;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}



int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_num = raw;
	std::cout << "setRawBits member function called with value: " << raw << std::endl;
}
