#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}


AForm	*Intern::makeForm(std::string FormName, std::string target)
{
	int i = 0;
	int res = -1;

	std::string doc[] = {"shrubbery creation", "robotomy resquest", "presidential pardon"};

	while (i < 3)
	{
		res = doc[i].find(FormName);
		if (res != -1)
			break ;
		i++;
	}

	switch (i)
	{
		case 0:
		{
			std::cout << std::endl << "Intern create Shrubbery" << std::endl << std::endl;
			return (new ShrubberyCreationForm(target));
		}

		case 1:
		{
			std::cout << std::endl << "Intern create Robotomy" << std::endl << std::endl;
			return (new RobotomyRequestForm(target));
		}
		case 2:
		{
			std::cout <<  std::endl << "Intern create Presidential" << std::endl << std::endl;
			return (new PresidentialPardonForm(target));
		}
		default:
			break;
	}
	std::cout << std::endl << "\033[31mThe " << FormName << "\033[0m : fail the form no exist" << std::endl << std::endl;
	return (NULL);
}
