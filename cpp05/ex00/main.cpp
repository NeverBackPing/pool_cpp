# include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << "\33[0;32m[Test 1]\33[0m" << std::endl;

		Bureaucrat b1("Alice", 2);
		std::cout << b1 << std::endl;

		b1.incrementGrade();
		std::cout << b1 << std::endl;
		b1.incrementGrade();

	} catch (const std::exception &e)
	{
		std::cerr << "\33[0;31mException caught\33[0m: " << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl << "\33[0;32m[Test 2]\33[0m" << std::endl;

		Bureaucrat b2("Bob", 151);
		std::cout << b2 << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << "\33[0;31mException caught\33[0m: " << e.what() << std::endl;
	}

	return (0);
}


