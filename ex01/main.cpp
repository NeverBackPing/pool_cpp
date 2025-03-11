/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:16 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/11 13:08:16 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

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
		use_option(option, book, &contactcount);
	}
	return (0);
}

