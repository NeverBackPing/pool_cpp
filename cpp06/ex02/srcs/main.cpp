# include <ctime>
# include <string>
# include <cstdlib>
# include <typeinfo>
# include <iostream>
# include "../includes/A.hpp"
# include "../includes/B.hpp"
# include "../includes/C.hpp"
#include "../includes/Base.hpp"

int main()
{
	srand(time(0));

	for (int i = 0; i < 5; i++)
    {
        std::cout << "\033[0;32m[Test " << i + 1 << "]\033[0m" << std::endl;

        Base* p = generate();

        std::cout << "Identify (pointer): ";
        identify(p);

        std::cout << "Identify (reference): ";
        identify(*p);

        delete p;

        std::cout << std::endl;
    }
    return (0);
}

