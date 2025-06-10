#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main(void)
{
	Intern someRandomIntern;

	//ShrubberyCreationForm
	Bureaucrat employed("Kevin", 137);
	AForm *doc = someRandomIntern.makeForm("shrubbery creation", "Bender");

	if (doc == NULL)
		return (-1);

	std::cout << "\033[34m[Start ShrubberyCreationForm]\033[0m" << std::endl;

	std::cout << *doc << std::endl;
	std::cout << employed << std::endl;

	std::cout << "\033[34m[Employed signed ShrubberyCreationForm]\033[0m" << std::endl;

	employed.signForm(*doc);

	doc->execute(employed);

	std::cout << *doc << std::endl << std::endl;

	delete doc;

	std::cout << "-------------------------------------" << std::endl << std::endl;

	//RobotomyRequestForm
	Bureaucrat employed2("Alexia", 20);
	AForm *doc2 = someRandomIntern.makeForm("robotomy request", "Bender");

	if (doc2 == NULL)
		return (-1);

	std::cout << "\033[34m[Start RobotomyRequestForm]\033[0m" << std::endl;

	std::cout << *doc2 << std::endl;
	std::cout << employed << std::endl;

	std::cout << "\033[34m[Employed signed RobotomyRequestForm]\033[0m" << std::endl;

	employed2.signForm(*doc2);

	doc2->execute(employed2);

	delete doc2;
	//RobotomyRequestForm delele

	std::cout << std::endl << "-------------------------------------" << std::endl << std::endl;

	//PresidentialPardonForm
	Bureaucrat employed3("Robert", 19);
	AForm *doc3 = someRandomIntern.makeForm("presidential pardon", "Bender");

	if (doc3 == NULL)
		return (-1);

	std::cout << "\033[34m[Start PresidentialPardonForm]\033[0m" << std::endl;

	std::cout << *doc3 << std::endl;
	std::cout << employed << std::endl;

	std::cout << "\033[34m[Employed signed PresidentialPardonForm]\033[0m" << std::endl;

	employed3.signForm(*doc3);

	doc3->execute(employed3);

	std::cout << std::endl;

	delete doc3;

	//PresidentialPardonForm delete
	std::cout << std::endl << "-------------------------------------" << std::endl << std::endl;

	//Fail form
	AForm *doc4 = someRandomIntern.makeForm("Tax form", "Bender");

	if (doc4 == NULL)
		return (-1);

	std::cout << "\033[34m[Start Fail Form]\033[0m" << std::endl;

	std::cout << *doc4 << std::endl;

	std::cout << "\033[34m[Employed signed  fail Form]\033[0m" << std::endl;

	doc4->execute(employed3);

	std::cout << std::endl;

	delete doc4;

	//Fail form delete

	return (0);
}

