#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main(void)
{

	//ShrubberyCreationForm
	std::cout << "\033[34m[Start ShrubberyCreationForm]\033[0m" << std::endl;
	
	Bureaucrat employed("Kevin", 137);
	ShrubberyCreationForm doc("Home");
	std::cout << doc << std::endl;
	std::cout << employed << std::endl;

	std::cout << "\033[34m[Employed signed ShrubberyCreationForm]\033[0m" << std::endl;

	employed.signForm(doc);

	doc.execute(employed);

	std::cout << doc << std::endl << std::endl;

	std::cout << "-------------------------------------" << std::endl << std::endl;
	
	//RobotomyRequestForm
	std::cout << "\033[34m[Start RobotomyRequestForm]\033[0m" << std::endl;
	Bureaucrat employed2("Alexia", 20);
	RobotomyRequestForm doc2("Workspace");

	std::cout << doc2 << std::endl;
	std::cout << employed << std::endl;

	std::cout << "\033[34m[Employed signed RobotomyRequestForm]\033[0m" << std::endl;

	employed2.signForm(doc2);

	doc2.execute(employed2);

	std::cout << std::endl << "-------------------------------------" << std::endl << std::endl;

	//PresidentialPardonForm
	std::cout << "\033[34m[Start PresidentialPardonForm]\033[0m" << std::endl;
	Bureaucrat employed3("Robert", 19);
	PresidentialPardonForm doc3("School");
	std::cout << doc3 << std::endl;
	std::cout << employed << std::endl;

	std::cout << "\033[34m[Employed signed PresidentialPardonForm]\033[0m" << std::endl;
	doc3.execute(employed3);
	employed3.signForm(doc3);

	std::cout << std::endl;

	return (0);
}

