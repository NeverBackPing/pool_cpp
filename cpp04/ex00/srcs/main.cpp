#include "../includes/Cat.h"
#include "../includes/Dog.h"
#include "../includes/Animal.h"
#include "../includes/WrongCat.h"
#include "../includes/WrongAnimal.h"

int main()
{
	std::cout << "\n[ TESTS WITH CORRECT CLASSES ]\n";

	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n[TYPE] dog: " << dog->getType() << std::endl;
	std::cout << "[TYPE] cat: " << cat->getType() << std::endl;

	std::cout << "\n[SOUND] cat->makeSound(): ";
	cat->makeSound();
	std::cout << "[SOUND] dog->makeSound(): ";
	dog->makeSound();
	std::cout << "[SOUND] animal->makeSound(): ";
	animal->makeSound();

	delete cat;
	delete dog;
	delete animal;

	std::cout << "\n[ TESTS WITH WRONG CLASSES ]\n";

	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << "\n[TYPE] wrong_cat: " << wrong_cat->getType() << std::endl;

	std::cout << "\n[SOUND] wrong_cat->makeSound(): ";
	wrong_cat->makeSound();
	std::cout << "[SOUND] wrong_animal->makeSound(): ";
	wrong_animal->makeSound();

	delete wrong_cat;
	delete wrong_animal;

	return (0);
}
