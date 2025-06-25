# include "Bureaucrat.hpp"

int main()
{
    try
	{
        Bureaucrat b1("Alice", 2);
        std::cout << b1 << std::endl;

        b1.incrementGrade();  // Passe à 1
        std::cout << b1 << std::endl;

        b1.incrementGrade();  // Erreur : trop haut
    } catch (const std::exception &e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
	{
        Bureaucrat b2("Bob", 151);  // Erreur : grade trop bas
    } 
	catch (const std::exception &e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return (0);
}


