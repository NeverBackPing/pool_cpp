# include <ctime>
# include <string>
# include <cstdlib>
# include <typeinfo>
# include <iostream>
# include "../includes/A.hpp"
# include "../includes/B.hpp"
# include "../includes/C.hpp"
#include "../includes/Base.hpp"

Base* generate(void)
{
    int r = rand() % 3;
    switch (r)
    {
        case 0:
            std::cout << "Generated A" << std::endl;
            return new A;
        case 1:
            std::cout << "Generated B" << std::endl;
            return new B;
        default:
            std::cout << "Generated C" << std::endl;
            return new C;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } 
    catch (std::bad_cast&) {}

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } 
    catch (std::bad_cast&) {}

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } 
    catch (std::bad_cast&){}
}
