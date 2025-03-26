/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choise.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:31 by sjossain          #+#    #+#             */
/*   Updated: 2025/02/26 11:57:31 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/PhoneBook.h"

int	choise_option(void)
{
	int	option;

	option = 0;
	while (!(std::cin >> option))
	{
		if (isdigit(option))
			break ;
		std::cin.clear();
		std::cout << "\nStatut: \033[31mInvalid input.\033[0m\n" << std::endl;
		ft_menu();
		std::cin.ignore();
	}
	return (option);
}
