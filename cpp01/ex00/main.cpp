#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("Foo");
	zombie1.announce();
	Zombie *zombie2 = newZombie("Buzz");
	zombie2->announce();
	randomChump("FooBuzz");
	delete zombie2;
    return (0);
}