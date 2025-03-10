/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:16 by sjossain          #+#    #+#             */
/*   Updated: 2025/02/26 17:43:01 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int	use_option(std::string option)
{
	if (!option.compare("ADD"))
		return (0);
	if (!option.compare("SEARCH"))
		return (1);
	return (-1);
}

int	main(void)
{
	std::string	option;
	PhoneBook	book;
	int			contactcount;

	contactcount = 0;
	system("clear");
	std::cout << "\nStatut: \033[37mWaiting for response....\033[0m\n" << std::endl;
	while (true)
	{
		ft_menu();
		getline(std::cin, option);
		if (!option.compare("EXIT") || std::cin.eof())
			exit_phone_book();
		system("clear");
		switch (use_option(option))
		{
			case(0):
			{
				if (contactcount == 7)
					contactcount = 0;
				system("clear");
				book.add_contact(contactcount);
				system("clear");
				std::cout << "\nStatut: \033[32mSuccess new contact add!\033[0m\n" << std::endl;
				contactcount++;
				break ;
			}
			case(1):
			{
				if (contactcount == 0)
				{
					std::cout << "\nStatut: \033[37mNo contact add !\033[0m\n" << std::endl;
					break ;
				}
				system("clear");
				book.search_contact(contactcount);
				std::cout << "\nStatut: \033[37mWaiting for response....\033[0m\n" << std::endl;
				break ;
			}
			default:
				std::cout << "\nStatut: \033[31mUnsupported input.\033[0m\n" << std::endl;
		}
	}
	return (0);
}

