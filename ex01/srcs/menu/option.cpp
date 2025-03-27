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

#include "../../includes/PhoneBook.h"

void	PhoneBook::add_contact(int i, int *exit)
{
	PhoneBook	book;
	std::string	number;
	std::string	first;
	std::string	last;
	std::string	nickname;
	std::string	dark_secret;

	first = out_data("\n\nEnter First Name: ", exit);
	if (*exit)
		return ;
	last = out_data("\nEnter Last Name: ", exit);
	if (*exit)
		return ;
	nickname = out_data("\nEnter nickname : ", exit);
	if (*exit)
		return ;	
	number = out_data_number("\nEnter Phone Number: ", exit);
	if (*exit)
		return ;		
	dark_secret = out_secret("\nEnter a dark secret: ", exit);
	if (*exit)
		return ;
	contact[i] = std::move(Contact(first, last, nickname, number, dark_secret));
}

void	PhoneBook::search_contact(int count, int *exit)
{
	std::string	option;
	int			option_index;
	static int	display = 0;

	if (display < count)
		display = count;
	std::cout << std::setw(10) << "INDEX"
				<< "|" << std::setw(10) << "FIRST NAME"
				<< "|" << std::setw(10) << "LAST NAME"
				<< "|" << std::setw(10) << "NICKNAME"
				<< "|\n";

	for (int i = 0; i < display; i++)
	{
		std::cout << std::setw(10) << i + 1
					<< "|" << std::setw(10) << truncate(contact[i].getFirstName(), 10)
					<< "|" << std::setw(10) << truncate(contact[i].getLastName(), 10)
					<< "|" << std::setw(10) << truncate(contact[i].getNickname(), 10)
					<< "|\n";
	}
	std::cout << "\nChoose an index > ";
	std::getline(std::cin, option);
	if (std::cin.eof() || !option.compare("EXIT"))
	{
		option.clear();
		option.shrink_to_fit();
		*exit = 1;
		return ;
	}
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
	option.clear();
	option.shrink_to_fit();
}


