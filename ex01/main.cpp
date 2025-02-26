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

int	main(void)
{
	int			option;
	PhoneBook	book;
	int			contactcount;

	option = 0;
	contactcount = 0;
	system("clear");
	std::cout << "\nStatut: \033[37mWaiting for response....\033[0m\n" << std::endl;
	while (true)
	{
		ft_menu();
		option = choise_option();
		if (option == 3)
			exit_phone_book();
		system("clear");
		switch (option)
		{
			case(1):
			{
				if (contactcount == 7)
					contactcount = 0;
				book.add_contact(contactcount);
				system("clear");
				std::cout << "\nStatut: \033[32mSuccess new contact add!\033[0m\n" << std::endl;
				contactcount++;
				break ;
			}
			case(2):
			{
				if (contactcount == 0)
				{
					std::cout << "\nStatut: \033[37mNo contact add !\033[0m\n" << std::endl;
					break ;
				}
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

