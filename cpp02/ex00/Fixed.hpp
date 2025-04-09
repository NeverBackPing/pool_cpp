/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:24:10 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/09 17:24:05 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
		void setRawBits(int const raw);
		int getRawBits(void) const;
};

#endif
