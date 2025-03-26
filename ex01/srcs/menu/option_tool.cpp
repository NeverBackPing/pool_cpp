/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_tool.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:52:36 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/11 13:35:48 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/PhoneBook.h"

bool	is_space(char c)
{
	if (c == '\n' || c == ' ' || c == '\t' || c == '\r')
		return (true);
	return (false);
}

std::string	truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return str.substr(0, width - 1) + ".";
	return (str);
}

bool	check_space(const std::string& str)
{
	for (char c : str)
	{
		if (is_space(c))
			return (false);
	}
	return (!str.empty());
}

bool	all_digits(const std::string& number)
{
	for (char c : number)
	{
		if (!std::isdigit(c))
			return (false);
	}
	return (!number.empty());
}

std::string	out_data(std::string handler)
{
	std::string	data;

	std::cout << handler;
	getline(std::cin, data);
	if (std::cin.eof() || !data.compare("EXIT"))
		exit_phone_book();
	while (1)
	{
		if (check_space(data))
		{
			return (data);
		}
		std::cin.clear();
		std::cout << handler;
		getline(std::cin, data);
	}
	return (data);
}

std::string	out_data_number(std::string handler)
{
	std::string	data;

	std::cout << handler;
	getline(std::cin, data);
	if (std::cin.eof() || !data.compare("EXIT"))
		exit_phone_book();
	while (1)
	{
		if (all_digits(data) && check_space(data))
		{
			return (data);
		}
		std::cin.clear();
		std::cout << "\nEnter Phone Number : ";
		getline(std::cin, data);
	}
	return (data);
}

int	what_option(std::string option)
{
	if (!option.compare("ADD"))
		return (0);
	if (!option.compare("SEARCH"))
		return (1);
	return (-1);
}

void	use_option(std::string option, PhoneBook *book, int *contactcount)
{
	switch (what_option(option))
	{
		case(0):
		{
			if (*contactcount == 8)
				*contactcount = 0;
			book->add_contact(*contactcount);
			std::cout << "\nStatut: \033[32mSuccess new contact add!\033[0m\n" << std::endl;
			(*contactcount)++;
			break ;
		}
		case(1):
		{
			if (*contactcount == 0)
			{
				std::cout<< "\nStatut: \033[37mNo contact add !\033[0m\n" << std::endl;
				break ;
			}
			else
				std::cout << std::endl;
			book->search_contact(*contactcount);
			std::cout << "\nStatut: \033[37mWaiting for response....\033[0m\n" << std::endl;
			break ;
		}
		default:
			std::cout << "\nStatut: \033[31mUnsupported input.\033[0m\n" << std::endl;
	}
}
