#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}


AForm *Intern::makeForm(std::string FormName, std::string target)
{
    std::string doc[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; ++i)
    {
        if (doc[i] == FormName)
        {
            switch(i)
            {
                case 0:
                    std::cout << "\nIntern creates ShrubberyCreationForm\n\n";
                    return new ShrubberyCreationForm(target);
                case 1:
                    std::cout << "\nIntern creates RobotomyRequestForm\n\n";
                    return new RobotomyRequestForm(target);
                case 2:
                    std::cout << "\nIntern creates PresidentialPardonForm\n\n";
                    return new PresidentialPardonForm(target);
            }
        }
    }
    std::cout << "\n\033[31mError: Form '" << FormName << "' does not exist.\033[0m\n\n";
    return NULL;
}

