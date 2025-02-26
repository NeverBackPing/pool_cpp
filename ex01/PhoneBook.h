#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iomanip>
# include <string>
# include <iostream>
# include <stdlib.h>
# include "Contact.h"

#define DATA_MAX 7

class	PhoneBook
{
	private:
		Contact contact[DATA_MAX];
		int contactCount = 0;
	public:
		PhoneBook	add_contact(void);
		PhoneBook	search_contact(void);
};

//choise.cpp
int		choise_option(void);
//menu.cpp
void	ft_menu(void);
//option.cpp
void	exit_phone_book(void);
#endif
