/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:10 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/10 14:37:35 by sjossain         ###   ########.fr       */
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
		Fixed& operator=(const Fixed& copy);
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
		~Fixed(void);

		float	toFloat(void) const;
		int		toInt(void) const;
};

#endif
