#ifndef CONTACT_H
# define CONTACT_H

# include <iomanip>
# include <string>
# include <iostream>
# include <stdlib.h>

#define DATA_MAX 7

class	Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int		number;
		std::string	dark_secret;
};

#endif
