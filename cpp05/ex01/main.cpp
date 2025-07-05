#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat b1("Arthur", 50);
<<<<<<< HEAD
	Bureaucrat b2("Alexia", 100);
=======
	Bureaucrat b2("Alexia", 101);
>>>>>>> 936fd0a (hello)
	Form doc("tax", 100, 80);

	std::cout << "\33[0;32m[INFO FORM]\33[0m" << std::endl;
	std::cout << doc << std::endl;

	std::cout << std::endl << "\33[0;32m[INFO BUREAUCRAT]\33[0m" << std::endl;
	std::cout <<  b1 << std::endl;
	std::cout <<  b2 << std::endl;

	try
	{
		std::cout << "\33[0;32m[Test 1]\33[0m" << std::endl;
		b1.signForm(doc);
		b2.signForm(doc);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
<<<<<<< HEAD
	std::cout << "\33[0;32m[SIGN AGAIN]\33[0m" << std::endl;
	b1.signForm(doc);
	b2.signForm(doc);
	std::cout << "\33[0;32m[SIGN AFTER UPGRADE LEVEL]\33[0m" << std::endl;
=======

	std::cout << "\33[0;32m[SIGN AGAIN]\33[0m" << std::endl;
	b1.signForm(doc);
	b2.signForm(doc);

	std::cout << "\33[0;32m[SIGN AFTER UPGRADE LEVEL]\33[0m" << std::endl;
    b2.incrementGrade();
>>>>>>> 936fd0a (hello)
	b2.signForm(doc);
	return (0);
}

