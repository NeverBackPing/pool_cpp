/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:10 by sjossain          #+#    #+#             */
/*   Updated: 2025/02/26 14:05:30 by sjossain         ###   ########.fr       */
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
		int		contactCount;
	public:
		void	add_contact(int contactCount);
		void	search_contact(int contactCount);
		void	fail_cin(char *str);
		bool	check_double(void);
};

//choise.cpp
int		choise_option(void);
//menu.cpp
void	ft_menu(void);
//option.cpp
void	exit_phone_book(void);
#endif
