#include <iostream>
#include <string>

int main(void)
{
    std::string brain;
    std::string *brain_ptr;

    brain = "HI THIS IS BRAIN";

    std::cout << "Brain:     " << brain << std::endl;

    std::cout << "Brain:     " << &brain << std::endl;

    brain_ptr = &brain;

    std::cout << "Brain ptr: " << brain_ptr << std::endl;

    std::string &brain_ref = brain;

    std::cout << "Brain ref: " << brain_ptr << std::endl;
}