#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{

	Bureaucrat employed("Kevin", 137);
	ShrubberyCreationForm doc("Home");

	std::cout << "\033[31m[Start ShrubberyCreationForm]\033[0m" << std::endl;

	std::cout << doc << std::endl;
	std::cout << employed << std::endl;

	//doc.execute(employed);

	std::cout << "\033[31m[Employed signed ShrubberyCreationForm]\033[0m" << std::endl;

	employed.signForm(doc);

	doc.execute(employed);

	std::cout << doc << std::endl;
	return (0);
}

