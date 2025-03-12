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

bool	all_digits(std::string number)
{
	int	detect;
	int	i;

	i = 0;
	detect = 0;
	while (number[i])
	{
		if ((number[i] >= '0' && number[i] <= '9'))
			detect++;
		i++;
	}
	std::cout << "count: " << detect << std::endl;
	if (detect != 0)
		return (true);
	return (false);
}

void	PhoneBook::add_contact(int i)
{
	std::string	number;
	std::string	first;
	std::string	last;
	std::string	nickname;
	std::string	dark_secret;
	bool		allDigits;

	allDigits = true;
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
	getline(std::cin, number);
	if (std::cin.eof())
		exit_phone_book();
	while (1)
	{
		if (all_digits(number) == false)
			break ;
		std::cin.clear();
		std::cout << "\nEnter Phone Number : ";
		std::cin >> number;
	}
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

std::string	truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return str.substr(0, width - 1) + ".";
	return str;
}

void PhoneBook::search_contact(int count)
{
	if (count == 0)
	{
		std::cout << "No contacts saved.\n";
		return;
	}

	std::string option;
	int option_index;

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
	//ft_menu();
	exit(0);
}



