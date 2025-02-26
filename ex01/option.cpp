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

bool	PhoneBook::check_double(void)
{
	PhoneBook	book;
	int			i;
	int			j;

	i = 0;
	j = 1;
	while (i < book.contactCount)
	{
		while (j < book.contactCount)
		{
			if (!book.contact[i].first_name.compare(book.contact[j].first_name) &&\
				!book.contact[i].last_name.compare(book.contact[j].last_name) && \
				book.contact[i].number == book.contact[j].number)
				return (false);
			j++;
		}
		j++;
		i++;
	}
	return (true);
}

void	PhoneBook::fail_cin(char *str)
{
	PhoneBook	book;

	int	check_double;

	check_double = 1;
	while (std::cin.fail() && check_double)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << str;
		std::cin >> book.contact[book.contactCount].first_name;
		if (book.check_double())
			check_double = 0;
	}
	std::cin.clear();
}

void	PhoneBook::add_contact(int contactCount)
{
	PhoneBook	book;

	system("clear");
	std::cout << "\n\nEnter First Name : ";
	std::cin >> book.contact[contactCount].first_name;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\n\nEnter First Name : ";
		std::cin >> book.contact[contactCount].first_name;
	}

	std::cout << "\nEnter Last Name : ";
	std::cin >> book.contact[contactCount].last_name;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter Last Name : ";
		std::cin >> book.contact[contactCount].last_name;
	}

	std::cout << "\nEnter nickname : ";
	std::cin >>  book.contact[contactCount].nickname;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter nickname : ";
		std::cin >>  book.contact[contactCount].nickname;
	}

	std::cin.clear();
	std::cout << "\nEnter Phone Number : ";
	std::cin >>  book.contact[contactCount].number;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter Phone Number : ";
		std::cin >>  book.contact[contactCount].number;
	}

	std::cout << "\nEnter a dark secret : ";
	std::cin >>  book.contact[contactCount].dark_secret;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter a dark secret : ";
		std::cin >>  book.contact[contactCount].dark_secret;
	}
}

void	PhoneBook::search_contact(int contactCount)
{
	PhoneBook	book;
	std::string	search[2];
	uint8_t		i;
	uint8_t		exit;
	bool		find;

	exit = 0;
	system("clear");
	std::cout << "\nStatut: \033[37mWaiting for research....\033[0m\n" << std::endl;
	while (true)
	{
		i = 0;
		find = false;
		std::cout << "\nEnter a firt name: ";
		std::cin >>  search[0];
		std::cout << "\nEnter a last name: ";
		std::cin >>  search[1];
		while (i < contactCount)
		{
			int find_contact = book.contact[i].first_name.compare(search[0]) ;
			int find_contact1 = book.contact[i].last_name.compare(search[1]);
			if (find_contact == 0 && find_contact1 == 0)
			{
				find = true;
				break ;
			}
			i++;
		}
		if (find)
		{
			std::cout << "\nContact: "<< book.contact[i].first_name << " | ";
			std::cout << book.contact[i].last_name << " | ";
			std::cout << book.contact[i].nickname << " | ";
			std::cout << book.contact[i].number << " | ";
			std::cout << book.contact[i].dark_secret <<std::endl;
		}
		else
			std::cout << "\nContact: \033[31mNot find !\033[30m\n"<<std::endl;
		std::cout << "\n\nDo you want exit  enter 1 or continue enter 0 ? ";
		std::cin >>  exit;
		std::cout <<std::endl;
		while (std::cin.fail())
		{
			if (exit == 0 || exit == 1)
				break ;
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "\n\nDo you want exit  enter 1 or continue enter 0 ? ";
			std::cin >> exit;
		}
		if (exit == 1)
			break;
		system("clear");
	}
}

void	exit_phone_book(void)
{
	system("clear");
	std::cout << "\nStatut: \033[37mLog out\033[0m\n" << std::endl;
	ft_menu();
	std::cout << "\n";
	exit(0);
}
