#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* weaponPtr;
    
    public:
        HumanB(void){};
        HumanB(std::string _name);
        ~HumanB(void);

    void    attack(void);
    void    setWeapon(Weapon &_weaponPtr);
    };
    

#endif