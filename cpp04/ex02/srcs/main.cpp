#include "../includes/Cat.h"
#include "../includes/Dog.h"
#include "../includes/Animal.h"


int main()
{
	std::cout << "\n[ TESTS WITH CORRECT CLASSES ]\n";

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n[TYPE] dog: " << dog->getType() << std::endl;
	std::cout << "[TYPE] cat: " << cat->getType() << std::endl;

	std::cout << "\n[SOUND] cat->makeSound(): ";
	cat->makeSound();
	std::cout << "[SOUND] dog->makeSound(): ";
	dog->makeSound();
	std::cout << "[SOUND] animal->makeSound(): ";

	delete cat;
	delete dog;
	return (0);
}

