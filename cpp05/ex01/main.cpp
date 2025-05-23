#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat employed("Kevin", 100);
		Form doc("Tax", 100, 111);

		std::cout << "[Start]" << std::endl;
		std::cout << doc << std::endl;
		Getinfo(employed);

		std::cout << "[END]" << std::endl;
		employed.signForm(doc);
		std::cout << doc << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}

