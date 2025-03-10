/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:06 by sjossain          #+#    #+#             */
/*   Updated: 2025/02/26 11:57:06 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	PhoneBook::add_contact(int i)
{
	int			number;
	std::string	first;
	std::string	last;
	std::string	nickname;
	std::string	dark_secret;

	std::cout << "\n\nEnter First Name : ";
	std::cin >> first;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\n\nEnter First Name : ";
		std::cin >> first;
	}

	std::cout << "\nEnter Last Name : ";
	std::cin >> last;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter Last Name : ";
		std::cin >> last;
	}

	std::cout << "\nEnter nickname : ";
	std::cin >> nickname;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter nickname : ";
		std::cin >> nickname;
	}

	std::cout << "\nEnter Phone Number : ";
	std::cin >>  number;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter Phone Number : ";
		std::cin >>  number;
	}

	std::cout << "\nEnter a dark secret : ";
	std::cin >> dark_secret;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter a dark secret : ";
		std::cin >> dark_secret;
	}
	contact[i] = Contact(first, last, nickname, number, dark_secret);
}

void	PhoneBook::search_contact(int count)
{
	std::string	option;
	int			first_name_width;
	int			last_name_width;
	int			nickname_width;
	int			dark_width;
	int			number_width;
	int			num_length;
	int			index;


	index = 0;
	num_length = 0;
	dark_width = 0;
	first_name_width = 0;
	last_name_width = 0;
	nickname_width = 0;
	number_width = 0;
	for (size_t i = 0; i < 8; ++i)
	{
		first_name_width = std::max(first_name_width, (int)contact[i].getFirstName().size());
		last_name_width = std::max(last_name_width, (int)contact[i].getLastName().size());
		nickname_width = std::max(nickname_width, (int)contact[i].getNickname().size());
		dark_width = std::max(dark_width, (int)contact[i].getDarkSecret().size());
		num_length = std::to_string(contact[i].getNumber()).length();
		number_width = std::max(number_width, num_length);
	}
	std::cout << std::setw(8) << "ID"
				<< " | " << std::setw(first_name_width) << "FIRST_NAME"
				<< " | " << std::setw(last_name_width) << "LAST_NAME"
				<< " | " << std::setw(nickname_width) << "NICKNAME"
				<< " | " << std::setw(number_width) << "NUMBER"
				<< " | " << std::setw(dark_width) << "DARK_SECRET"
				<< " |\n";
	std::cout << std::string(8 + number_width + first_name_width + last_name_width + nickname_width + 13, '-') << "\n";
	for (size_t i = 0; i < count; ++i)
	{
		std::cout << index
				<< " | " << std::setw(first_name_width) << contact[i].getFirstName()
				<< " | " << std::setw(last_name_width) << contact[i].getLastName()
				<< " | " << std::setw(nickname_width) << contact[i].getNickname()
				<< " | " << std::setw(number_width) << contact[i].getNumber()
				<< " | " << std::setw(dark_width) << contact[i].getDarkSecret()
				<< " |\n";
	}
	std::cout << std::string(8 + number_width + first_name_width + last_name_width + nickname_width + 13, '-') << "\n";

	getline(std::cin, option);
}

void	exit_phone_book(void)
{
	system("clear");
	std::cout << "\nStatut: \033[37mLog out\033[0m\n" << std::endl;
	ft_menu();
	std::cout << "\n";
	exit(0);
}



