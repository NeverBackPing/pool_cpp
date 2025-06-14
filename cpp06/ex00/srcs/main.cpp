#include <cstdio>
#include "../includes/ScalarConverte.hpp" 

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "\033[0;31mError: Too many argument\033[0m" << std::endl;
        return (-1);
    }
    (void)av;
}