/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:10 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/11 15:11:47 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_num;
		static const int	_bit = 8;

	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(const Fixed &copy);
		~Fixed(void);

		Fixed& operator=(const Fixed& copy);

		bool operator>(const Fixed& copy);
		bool operator<(const Fixed& copy);
		bool operator>=(const Fixed& copy);
		bool operator<=(const Fixed& copy);
		bool operator==(const Fixed& copy);
		bool operator!=(const Fixed& copy);

		Fixed operator+(const Fixed& copy);
		Fixed operator-(const Fixed& copy);
		Fixed operator*(const Fixed& copy);
		Fixed operator/(const Fixed& copy);

		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);


		static Fixed& min(Fixed& first, Fixed& second);
		static Fixed& max(Fixed& first, Fixed& second);
		static const Fixed& min(const Fixed& first, const Fixed& second);
		static const Fixed& max(const Fixed& first, const Fixed& second);

		int		getRawBits(void) const;
		int		toInt(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
