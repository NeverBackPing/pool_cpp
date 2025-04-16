/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:10 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/16 19:47:50 by sjossain         ###   ########.fr       */
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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
