#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weaponPtr)
{
    this->name = _name;
    this->weaponPtr = &_weaponPtr;
}

HumanA::~HumanA(void)
{
    std::cout << "Delete: '";
    std::cout <<  this->name << "'" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attack with ";
    std::cout << "their " << weaponPtr->getType() << std::endl;
}