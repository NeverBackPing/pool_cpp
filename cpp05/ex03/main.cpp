#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
    Intern someRandomIntern;

    Bureaucrat employed("Kevin", 137);
    AForm *doc = someRandomIntern.makeForm("shrubbery creation", "Bender");

    if (!doc)
    {
        std::cerr << "Failed to create form.\n";
        return (-1);
    }

    std::cout << "\033[34m[Start ShrubberyCreationForm]\033[0m" << std::endl;
    std::cout << *doc << std::endl << employed << std::endl;

    employed.signForm(*doc);
    doc->execute(employed);

    delete doc;

    std::cout << "-------------------------------------" << std::endl;

    Bureaucrat employed2("Alexia", 20);
    AForm *doc2 = someRandomIntern.makeForm("robotomy request", "Bender");

    if (!doc2)
    {
        std::cerr << "Failed to create form.\n";
        return (-1);
    }

    std::cout << "\033[34m[Start RobotomyRequestForm]\033[0m" << std::endl;
    std::cout << *doc2 << std::endl << employed2 << std::endl;

    employed2.signForm(*doc2);
    doc2->execute(employed2);

    delete doc2;

    std::cout << "-------------------------------------" << std::endl;

    Bureaucrat employed3("Robert", 19);
    AForm *doc3 = someRandomIntern.makeForm("presidential pardon", "Bender");

    if (!doc3)
    {
        std::cerr << "Failed to create form.\n";
        return (-1);
    }

    std::cout << "\033[34m[Start PresidentialPardonForm]\033[0m" << std::endl;
    std::cout << *doc3 << std::endl << employed3 << std::endl;

    employed3.signForm(*doc3);
    doc3->execute(employed3);

    delete doc3;

    std::cout << "-------------------------------------" << std::endl;

    AForm *doc4 = someRandomIntern.makeForm("Tax form", "Bender");

    if (!doc4)
    {
        std::cout << "Form creation failed as expected for unknown form.\n";
    }
    else
        delete doc4;

    return (0);
}
