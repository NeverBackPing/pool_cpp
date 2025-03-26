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

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	dark_secret;

	public:
		Contact() : first_name(""), last_name(""), nickname(""), number(""), dark_secret("") {}
		Contact(std::string fn, std::string ln, std::string nn, std::string num, std::string secret)
			: first_name(fn), last_name(ln), nickname(nn), number(num), dark_secret(secret) {}

		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getNumber() const;
		std::string	getDarkSecret() const;

		void displayContact() const {
			std::cout << "\n===== CONTACT DETAILS =====\n";
			std::cout << "First Name: " << first_name << "\n";
			std::cout << "Last Name: " << last_name << "\n";
			std::cout << "Nickname: " << nickname << "\n";
			std::cout << "Phone Number: " << number << "\n";
			std::cout << "Darkest Secret: " << dark_secret << "\n";
			std::cout << "===========================\n";
		}
};

#endif
