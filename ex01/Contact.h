/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:28 by sjossain          #+#    #+#             */
/*   Updated: 2025/02/26 11:57:28 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iomanip>
# include <string>
# include <iostream>
# include <stdlib.h>

#define DATA_MAX 7

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			number;
		std::string	dark_secret;
	public:
		Contact(std::string fn, std::string ln, std::string nn, int num, std::string secret) :
			first_name(fn),
			last_name(ln),
			nickname(nn),
			number(num),
			dark_secret(secret)
		{
			
		}
};

#endif
