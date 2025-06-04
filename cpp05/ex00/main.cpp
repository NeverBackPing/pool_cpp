#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat employed("Kevin", 2);
	Bureaucrat employed2;

	std::cout << std::endl <<"\033[31m[ Emplyed 1 ]\033[0m" << std::endl << std::endl;

	std::cout << employed << std::endl;

	std::cout << "\033[31m[ Emplyed 2 ]\033[0m" << std::endl << std::endl;

	std::cout << employed2 << std::endl;

	std::cout << "\033[31m[ Edit Emplyed 2 ]\033[0m" << std::endl << std::endl;

	employed2 = employed;

	std::cout << employed2 << std::endl;

	return (0);
}

