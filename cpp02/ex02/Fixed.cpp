/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:08 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/16 22:17:55 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: _num(0)
{
}

Fixed::Fixed(int const n)
: _num(n << _bit)
{
}

Fixed::Fixed(float const n)
: _num(roundf(n * (1 << _bit)))
{
}

Fixed::Fixed(const Fixed &copy)
{
	_num = copy._num;
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void) const
{
	return (this->_num);
}

void Fixed::setRawBits(int const raw)
{
	this->_num= raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_num / (1 << _bit));
}

int		Fixed::toInt(void) const
{
	return (_num >> _bit);
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	if (this == & copy)
		return (*this);
	_num = copy._num;
	return (*this);
}

bool Fixed::operator>(const Fixed& copy)
{
	return (this->_num > copy._num);
}

bool Fixed::operator<(const Fixed& copy)
{
	return (this->_num < copy._num);
}

bool Fixed::operator<=(const Fixed& copy)
{
	return (this->_num <= copy._num);
}

bool Fixed::operator>=(const Fixed& copy)
{
	return (this->_num >= copy._num);
}

bool Fixed::operator==(const Fixed& copy)
{
	return (this->_num == copy._num);
}

bool Fixed::operator!=(const Fixed& copy)
{
	return (this->_num != copy._num);
}

Fixed Fixed::operator+(const Fixed& copy)
{
	Fixed tmp;

	tmp.setRawBits(this->_num + copy._num);
	return (tmp);
}

Fixed Fixed::operator-(const Fixed& copy)
{
	Fixed tmp;

	tmp.setRawBits(this->_num - copy._num);
	return (tmp);
}

Fixed Fixed::operator*(const Fixed& copy)
{
	Fixed tmp;

	tmp.setRawBits(this->_num * copy._num >> _bit);
	return (tmp);
}

Fixed Fixed::operator/(const Fixed& copy)
{
	Fixed tmp;

	tmp.setRawBits(this->_num * (1 << _bit) / copy._num);
	return (tmp);
}

Fixed& Fixed::operator++(void)
{
	this->_num++;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->_num--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this;
	--*this;
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	++*this;
	return (tmp);
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	if (first < second)
		return (second);
	return (first);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first._num < second._num)
		return (first);
	return (second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first._num < second._num)
		return (second);
	return (first);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

