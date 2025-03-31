/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:08 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/31 23:52:30 by sjossain         ###   ########.fr       */
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
	num = copy.bit;
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
