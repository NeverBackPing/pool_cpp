/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:10 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/31 23:52:18 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		float				num;
		static const int	bit = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
}

#endif
