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
	std::string	first;
	std::string	last;
	std::string	nickname;
	int			number;
	std::string	dark_secret;
	uint8_t		i;
	char		exit;
	bool		find;
	std::string	search[2];


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
				system("clear");
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
				book.contact[contactcount] = Contact(first, last, nickname, number, dark_secret);
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
					while (i < contactcount)
					{
						int find_contact = book.contact[i].getFirstName().compare(search[0]) ;
						int find_contact1 = book.contact[i].getLastName().compare(search[1]);
						if (!find_contact && !find_contact1)
						{
							find = true;
							break ;
						}
						i++;
					}
					if (find)
					{
						std::cout << "\nContact: "<< book.contact[i].getFirstName() << " | ";
						std::cout << book.contact[i].getLastName() << " | ";
						std::cout << book.contact[i].getNickname() << " | ";
						std::cout << book.contact[i].getNumber() << " | ";
						std::cout << book.contact[i].getDarkSecret() <<std::endl;
					}
					else
						std::cout << "\nContact: \033[31mNot find !\033[30m\n"<<std::endl;
					std::cout << "\n\nDo you want exit  enter 1 or continue enter 0 ? ";
					std::cin >>  exit;
					std::cout <<std::endl;
					while (std::cin.fail())
					{
						if (exit == '0' || exit == '1')
							break ;
						std::cin.clear();
						std::cin.ignore(1000, '\n');
						std::cout << "\n\nDo you want exit  enter 1 or continue enter 0 ? ";
						std::cin >> exit;
					}
					if (exit == '1')
						break;
					system("clear");
				}
				std::cout << "\nStatut: \033[37mWaiting for response....\033[0m\n" << std::endl;
				break ;
			}
			default:
				std::cout << "\nStatut: \033[31mUnsupported input.\033[0m\n" << std::endl;
		}
	}
	return (0);
}

