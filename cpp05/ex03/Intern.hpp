#pragma once

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>

class AForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;
class PresidentialPardonForm;

class Intern
{
	public:
		Intern();
		~Intern();

		AForm	*makeForm(std::string FormName, std::string target);
};


