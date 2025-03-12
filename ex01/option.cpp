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
	PhoneBook	book;
	std::string	number;
	std::string	first;
	std::string	last;
	std::string	nickname;
	std::string	dark_secret;

	first = out_data("\n\nEnter First Name: ");
	last = out_data("\nEnter Last Name: ");
	nickname = out_data("\nEnter nickname : ");
	number = out_data_number("\nEnter Phone Number: ");
	dark_secret = out_data("\nEnter a dark secret: ");
	contact[i] = Contact(first, last, nickname, number, dark_secret);
}

void	PhoneBook::search_contact(int count)
{
	std::string	option;
	int			option_index;

	std::cout << std::setw(10) << "INDEX"
				<< "|" << std::setw(10) << "FIRST NAME"
				<< "|" << std::setw(10) << "LAST NAME"
				<< "|" << std::setw(10) << "NICKNAME"
				<< "|\n";

	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i + 1
					<< "|" << std::setw(10) << truncate(contact[i].getFirstName(), 10)
					<< "|" << std::setw(10) << truncate(contact[i].getLastName(), 10)
					<< "|" << std::setw(10) << truncate(contact[i].getNickname(), 10)
					<< "|\n";
	}

	std::cout << "\nChoose an index > ";
	std::getline(std::cin, option);
	if (std::cin.eof())
		exit_phone_book();

	try
	{
		option_index = std::stoi(option);
		if (option_index < 1 || option_index > count)
		{
			throw std::out_of_range("Invalid index.");
		}
		contact[option_index - 1].displayContact();
	}
	catch (const std::exception&)
	{
		std::cout << "\nStatus: \033[31mInvalid input.\033[0m\n" << std::endl;
	}
}

void	exit_phone_book(void)
{
	system("clear");
	std::cout << "\nStatut: \033[37mLog out\033[0m\n" << std::endl;
	exit(0);
}



