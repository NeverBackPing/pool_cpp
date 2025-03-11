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

#include "PhoneBook.h"

int	what_option(std::string option)
{
	if (!option.compare("ADD"))
		return (0);
	if (!option.compare("SEARCH"))
		return (1);
	return (-1);
}

void	use_option(std::string option, PhoneBook book, int *contactcount)
{
	switch (what_option(option))
	{
		case(0):
		{
			if (*contactcount == 7)
				contactcount = 0;
			system("clear");
			book.add_contact(*contactcount);
			system("clear");
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
			system("clear");
			book.search_contact(*contactcount);
			std::cout << "\nStatut: \033[37mWaiting for response....\033[0m\n" << std::endl;
			break ;
		}
		default:
			std::cout << "\nStatut: \033[31mUnsupported input.\033[0m\n" << std::endl;
	}
}
