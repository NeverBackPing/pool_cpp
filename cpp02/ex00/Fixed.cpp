/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:08 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/09 17:52:46 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: num(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	num = copy.num;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	num = copy.num;
	std::cout << "Copy assignment operator calle\n";
}



int	Fixed::getRawBits(void) const
{
	Fixed a;
	std::cout << "getRawBits member function called\n";
	a.setRawBits(this->bit);
	return (this->num);
}


void	Fixed::setRawBits(int const raw)
{

	this->num = raw << 1;
}
