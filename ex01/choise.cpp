#include "PhoneBook.h"

int	choise_option(void)
{
	int	option;

	option = 0;
	while (!(std::cin >> option))
	{
		if (isdigit(option))
			break ;
		std::cin.clear();
		system("clear");
		std::cout << "\nStatut: \033[31mInvalid input.\033[0m\n" << std::endl;
		ft_menu();
		std::cin.ignore();
	}
	return (option);
}