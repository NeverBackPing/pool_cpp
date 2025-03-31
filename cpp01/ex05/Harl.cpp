#include "Harl.hpp"



void	Harl::debug(void)
{
	std::cout << "debug\n";
}
void	Harl::info(void)
{
	std::cout << "info\n";
}

void	Harl::warning(void)
{
	std::cout << "warning\n";
}

void	Harl::error(void)
{
	std::cout << "error\n";
}

void	Harl::complain(std::string level)
{
	if (!level.compare("debug"))
		this->debug();
	if (!level.compare("info"))
		this->info();
	if (!level.compare("warning"))
		this->warning();
	if (!level.compare("error"))
		this->error();
}

