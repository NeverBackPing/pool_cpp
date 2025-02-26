/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:10 by sjossain          #+#    #+#             */
/*   Updated: 2025/02/26 15:38:59 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iomanip>
# include <string.h>
# include <iostream>
# include <stdlib.h>
# include <stdbool.h>
# include "Contact.h"

#define DATA_MAX 7

class	PhoneBook
{
	public:
		Contact	contact[DATA_MAX];
	public:
		void	add_contact(int contactcount);
		void	search_contact(int contactcount);
		void	fail_cin(char *str, int contactcount);
		bool	check_double(int contactcount);
};

//choise.cpp
int		choise_option(void);
//menu.cpp
void	ft_menu(void);
//option.cpp
void	exit_phone_book(void);
#endif
