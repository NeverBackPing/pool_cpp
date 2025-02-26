#include "PhoneBook.h"

void	tool_add(PhoneBook book)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ()
		{
			book.cotactct[i].add_contact();
			break ;
		}
		i++;
	}
}

int	main(void)
{
	int			option;
	Contact		contact[DATA_MAX];
	PhoneBook	book;

	option = 0;
	system("clear");
	std::cout << "\nStatut: \033[37mWaiting for response....\033[0m\n" << std::endl;
	while (true)
	{
		ft_menu();
		option = choise_option();
		if (option == 3)
			exit_phone_book();
		system("clear");
		switch (option)
		{
			case(1):
			{
				tool_add(book);
				std::cout << "\nStatut: \033[32mSuccess!\033[0m\n" << std::endl;
				break ;
			}
			case(2):
			{
				std::cout << "\nStatut: \033[32mSuccess!\033[0m\n" << std::endl;
				break ;
			}
			default:
				std::cout << "\nStatut: \033[31mUnsupported input.\033[0m\n" << std::endl;
		}
	}
	return (0);
}

