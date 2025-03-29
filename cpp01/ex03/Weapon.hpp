#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string weapon;
    
    public:
        Weapon(void){};
        Weapon(std::string _weapon);
        ~Weapon(void);

    std::string getType(void);
    void        setType(std::string _weapon);

};

#endif