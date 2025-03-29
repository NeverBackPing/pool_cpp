#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    this->name = _name;
}

HumanB::~HumanB(void)
{
    std::cout << "Delete: '";
    std::cout <<  this->name << "'" << std::endl;
}

void    HumanB::setWeapon(Weapon &_weaponPtr)
{
    this->weaponPtr = &_weaponPtr;
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attack with ";
    std::cout << "their " << weaponPtr->getType() << std::endl;
}