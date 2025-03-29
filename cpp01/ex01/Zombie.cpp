#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout<< "Destroyed ";
    std::cout<< "'" << this->_name << "'" << std::endl;
}

void Zombie::init_Name(std::string name)
{
	this->_name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->_name  << ": ahAhhh"<< std::endl;
}