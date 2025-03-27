/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:10 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/11 12:53:46 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iomanip>
# include <string.h>
# include <iostream>
# include <stdlib.h>
# include <stdbool.h>
# include <cstdint>
# include "Contact.h"

#define DATA_MAX 8

class	PhoneBook
{
	private:
		Contact	contact[DATA_MAX];
		
	public:
		PhoneBook() = default;
		void	add_contact(int i, int *exit);
		void	search_contact(int count, int *exit);
};

//choise.cpp
int			choise_option(void);
//menu.cpp
void		ft_menu(void);
//option_tool.cpp
std::string	out_secret(std::string handler, int *xit);
std::string	out_data(std::string handler, int *exit);
std::string	out_data_number(std::string handler, int *exit);
std::string	truncate(std::string str, size_t width);
bool		use_option(std::string option, PhoneBook *book, int *contactcount);
int			what_option(std::string option);
#endif
