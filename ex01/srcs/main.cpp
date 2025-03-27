/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:16 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/12 15:28:46 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.h"

int	main(void)
{
	PhoneBook	book;
	std::string	option;
	int			contactcount;
	
	contactcount = 0;
	std::cout << "\nStatut: \033[37mWaiting for response....\033[0m\n" << std::endl;
	while (true)
	{
		ft_menu();
		getline(std::cin, option);
		std::cin.clear();
		if (!option.compare("EXIT") || std::cin.eof())
			break ;
		if (use_option(option, &book, &contactcount))
			break ;
	}
	option.clear();
	option.shrink_to_fit();
	std::cout << "\n\nStatut: out\n" << std::endl;
	return (0);
}

