#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b1("Arthur", 50);
    Bureaucrat b2("Alexia", 140);
    Form f1("tax", 100, 80);

    std::cout << f1 << std::endl;

    try
	{
        f1.beSigned(b2);  // Trop faible
    } 
    catch (const std::exception &e)
	{
        std::cerr << e.what() << std::endl;
    }

    try
	{
        f1.beSigned(b1);  // OK
        std::cout << f1 << std::endl;
    } 
    catch (const std::exception &e)
	{
        std::cerr << e.what() << std::endl;
    }

    b1.signForm(f1);  // Devrait dire que déjà signé
    b2.signForm(f1);  // Trop faible

    return (0);
}

