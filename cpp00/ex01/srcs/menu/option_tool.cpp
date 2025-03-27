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

bool	no_just_space(const std::string& str)
{
	int	i;

	i = 0; 
	for (char c : str)
	{
		if (!isprint(c) || (c == ' ' && i == 0))
			return (false);
		i++;
	}
	return (!str.empty());
}

std::string	out_data(std::string handler, int *exit)
{
	std::string	data;

	std::cout << handler;
	getline(std::cin, data);
	if (std::cin.eof() || !data.compare("EXIT"))
	{
		data.clear();
		data.shrink_to_fit();
		*exit = 1;
		return ("");
	}
	while (1)
	{
		if (check_space(data))
			return (data);
		std::cin.clear();
		std::cout << handler;
		getline(std::cin, data);
		if (std::cin.eof() || !data.compare("EXIT"))
		{
			std::cin.clear();
			data.clear();
			data.shrink_to_fit();
			*exit = 1;
			return ("");
		}
		std::cin.clear();
	}
	return (data);
}

std::string	out_secret(std::string handler, int *exit)
{
	std::string	data;

	std::cout << handler;
	getline(std::cin, data);
	if (std::cin.eof() || !data.compare("EXIT"))
	{
		data.clear();
		data.shrink_to_fit();
		*exit = 1;
		return ("");

	}
	while (1)
	{
		if (no_just_space(data))
			return (data);
		std::cin.clear();
		std::cout << handler;
		getline(std::cin, data);
		if (std::cin.eof() || !data.compare("EXIT"))
		{
			std::cin.clear();
			data.clear();
			data.shrink_to_fit();
			*exit = 1;
			return ("");

		}
		std::cin.clear();
	}
	return (data);
}

std::string	out_data_number(std::string handler, int *exit)
{
	std::string	data;

	std::cout << handler;
	getline(std::cin, data);
	if (std::cin.eof() || !data.compare("EXIT"))
	{
		data.clear();
		data.shrink_to_fit();
		*exit = 1;
		return ("");

	}
	while (1)
	{
		if (all_digits(data) && check_space(data))
		{
			return (data);
		}
		std::cin.clear();
		std::cout << "\nEnter Phone Number : ";
		getline(std::cin, data);
		if (std::cin.eof() || !data.compare("EXIT"))
		{
			std::cin.clear();
			data.clear();
			data.shrink_to_fit();
			*exit = 1;
			return ("");
		}
		std::cin.clear();
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

bool	use_option(std::string option, PhoneBook *book, int *contactcount)
{
	int	exit;

	exit = 0;
	switch (what_option(option))
	{
		case(0):
		{
			if (*contactcount == 8)
				*contactcount = 0;
			book->add_contact(*contactcount, &exit);
			if (exit)
				return (true);
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
			book->search_contact(*contactcount, &exit);
			if (exit)
				return (true);
			std::cout << "\nStatut: \033[37mWaiting for response....\033[0m\n" << std::endl;
			break ;
		}
		default:
			std::cout << "\nStatut: \033[31mUnsupported input.\033[0m\n" << std::endl;
	}
	return (false);
}
