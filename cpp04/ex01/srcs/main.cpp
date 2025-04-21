#include "../includes/Cat.h"
#include "../includes/Dog.h"
#include "../includes/Animal.h"


int main()
{
	Animal* animals[6];

	std::cout << "[ DOG NEW] " << std::endl << std::endl;;
	for (int i = 0; i < 3; i++)
	{
		animals[i] = new Dog();
		std::cout << "Dog for index " << i << std::endl;
		std::cout << "-----------------------" << std::endl;
	}

	std::cout <<  std::endl << "[ CAT NEW] " << std::endl << std::endl;
	for (int i = 3; i < 6; i++)
	{
		animals[i] = new Cat();
		std::cout << "Cat for index " << i << std::endl;
		std::cout << "-----------------------" << std::endl;
	}

	std::cout <<  std::endl << "[ DELETE DOG AND CAT NEW] " << std::endl << std::endl;
	for (int i = 0; i < 6; i++)
	{
		delete animals[i];
	}

	return 0;
}


