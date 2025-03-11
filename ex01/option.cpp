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
	getline(std::cin, first);
	if (std::cin.eof())
		exit_phone_book();
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\n\nEnter First Name : ";
		std::cin >> first;
	}

	std::cout << "\nEnter Last Name : ";
	std::cin >> last;
	getline(std::cin, last);
	if (std::cin.eof())
		exit_phone_book();
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter Last Name : ";
		std::cin >> last;
	}

	std::cout << "\nEnter nickname : ";
	std::cin >> nickname;
	getline(std::cin, nickname);
	if (std::cin.eof())
		exit_phone_book();
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter nickname : ";
		std::cin >> nickname;
	}

	std::cout << "\nEnter Phone Number : ";
	std::cin >> number;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter Phone Number : ";
		std::cin >>  number;
	}

	std::cout << "\nEnter a dark secret : ";
	std::cin >> dark_secret;
	getline(std::cin, dark_secret);
	if (std::cin.eof())
		exit_phone_book();
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
	std::string	data;
	int			option_index;
	int			i;

	i = 0;
	option_index = 0;
	std::cout << "    INDEX"
				<< "|"  << " FIRST_NAME"
				<< "|"  << " LAST_NAME"
				<< "|"  << " NICKNAME"
				<< "|"  << "   NUMBER"
				<< "|\n";
	while (i < count)
	{
		std::cout << std::setw(10) << i + 1
			<< "|" << std::setw(10) << contact[i].getFirstName()
			<< "|" << std::setw(10) << contact[i].getLastName()
			<< "|" << std::setw(10) << contact[i].getNickname()
			<< "|" << std::setw(10) << contact[i].getNumber()
			<< "|\n";
		i++;
	}
	std::cout << "\nChoose in index > ";
	getline(std::cin, option);
	if (std::cin.eof())
		exit_phone_book();
	option_index = stoi(option);
	if (option_index < 1 && option_index > 8)
	{
		std::cout << "\nStatut: \033[31mInvalide input.\033[0m\n" << std::endl;
	}
}

void	exit_phone_book(void)
{
	system("clear");
	std::cout << "\nStatut: \033[37mLog out\033[0m\n" << std::endl;
	//ft_menu();
	exit(0);
}



