#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon* weaponPtr;
    
    public:
        HumanA(void){};
        HumanA(std::string _name, Weapon &_weaponPtr);
        ~HumanA(void);

    void    attack(void);
};

#endif