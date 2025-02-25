#ifdef PHONEBOOK_H
# define PHONEBOOK_H

# include <iomanip>
# include <string>
# include <iostream>

using namespace std;

class	PhoneBook
{
	public:
		char	*first_name;
		char	*last_name;
		char	*nickname;
		int		number;
		char	*dark_secret;
};

#endif
