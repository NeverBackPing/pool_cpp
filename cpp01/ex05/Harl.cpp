#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n\n";
	std::cout << "I love having extra bacon";
	std::cout << "for my 7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << "burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n\n";
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n\n";
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years,";
	std::cout << " whereas you started working here just last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n\n";
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*functions[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i]))
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "Invalid level\n";
}

