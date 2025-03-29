#include "sed.hpp"

int main(int ac, char **av)
{  
    if (ac != 4)
    {
        std::cerr << "\x1B[31mError\x1B[0m: < ./replace ";
        std::cerr << "<file> ";
        std::cerr << "<word target> ";
        std::cerr << "<replace word> > \n";
        return (0);
    }

    std::string line;
    std::ifstream fd(av[1]);

    if (!fd.is_open())
    {
        std::cerr << "\x1B[31mError\x1B[0m: Can't open '";
        std::cerr << av[1] << "' !\n";
        return (0);
    }

    std::cout << "\x1B[32mBefore replace\x1B[0m:\n\n";

    while (std::getline(fd, line))
        std::cout << line << std::endl;

    std::cout << std::endl;

    std::cout << "\x1B[32mAfter replace\x1B[0m:\n\n";
    
    fd.close();
}