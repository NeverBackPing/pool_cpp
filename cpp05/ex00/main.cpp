#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat employed("Kevin", 2);
	Bureaucrat employed2;

	std::cout << "[ Emplyed 1 ]" << std::endl << std::endl;

	std::cout << employed << std::endl;

	std::cout << "[ Emplyed 2 ]" << std::endl << std::endl;

	std::cout << employed2 << std::endl;

	std::cout << "[ Edit Emplyed 2 ]" << std::endl << std::endl;

	employed2 = employed;

	std::cout << employed2 << std::endl;

	return (0);
}

