#include "Weapon.hpp"

Weapon::Weapon(std::string _weapon)
{
    this->weapon = _weapon;
}

void Weapon::setType(std::string _weapon)
{
    this->weapon = _weapon;
}

std::string Weapon::getType(void)
{
    return (weapon);
}

Weapon::~Weapon(void)
{
    std::cout << "Detele weapon: ";
    std::cout << this->weapon << std::endl;
}