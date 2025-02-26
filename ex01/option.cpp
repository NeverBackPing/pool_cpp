#include "PhoneBook.h"

void	PhoneBook::add_contact(void)
{
	system("clear");
	std::cout << "\n\nEnter First Name : ";
	std::cin >> contact[.first_name;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\n\nEnter First Name : ";
		std::cin >> first_name;
	}
	std::cout << "\nEnter Last Name : ";
	std::cin >> last_name;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter Last Name : ";
		std::cin >> last_name;
	}
	std::cout << "\nEnter nickname : ";
	std::cin >> nickname;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter nickname : ";
		std::cin >> nickname;
	}
	std::cin.clear();
	std::cout << "\nEnter Phone Number : ";
	std::cin >> number;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter Phone Number : ";
		std::cin >> number;
	}
	std::cout << "\nEnter a dark secret : ";
	std::cin >> dark_secret;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "\nEnter a dark secret : ";
		std::cin >> dark_secret;
	}
}


void	PhoneBook::search_contact(void)
{
	NULL;
}

void	exit_phone_book(void)
{
	system("clear");
	std::cout << "\nStatut: \033[37mLog out\033[0m\n" << std::endl;
	ft_menu();
	std::cout << "\n";
	exit(0);
}
