#include "Bureaucrat.hpp"
# include "Form.hpp"


int	main(void)
{

	Bureaucrat employed("Kevin", 10);
	Form doc("Tax", 100, 111);

	std::cout << "\033[31m[Start]\033[0m" << std::endl;

	std::cout << doc << std::endl;
	std::cout << employed << std::endl;

	std::cout << "\033[31m[Employed signed]\033[0m" << std::endl;

	employed.signForm(doc);
	std::cout << doc << std::endl;
	return (0);
}

