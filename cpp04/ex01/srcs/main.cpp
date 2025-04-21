#include "../includes/Cat.h"
#include "../includes/Dog.h"
#include "../includes/Animal.h"


int main()
{
	Animal *animals[6];
	Animal animal_copy;

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

	for (size_t i = 0; i < 6; i++)
		animals[i]->makeSound();

	animal_copy = *animals[5];

	animal_copy.makeSound(); // noise

	std::cout <<  std::endl << "[ DELETE DOG AND CAT NEW] " << std::endl << std::endl;

	for (int i = 0; i < 6; i++)
		delete animals[i];

	animal_copy.makeSound(); // Not noise

	std::cout <<  std::endl << "[ BRAIN ] " << std::endl << std::endl;

	Dog doug;

	doug.getIdea()->setBrain("I want eat ice scream", 0);
	doug.getIdea()->setBrain("Lets go walk", 1);
	std::cout << std::endl << doug.getIdea()->getBrain(0)<< std::endl;
	std::cout << std::endl << doug.getIdea()->getBrain(1) << std::endl << std::endl;

	Cat Berlioz;
	Cat toulouse;

	Berlioz.getIdea()->setBrain("Happy Happy Happy\n", 0);
	toulouse = Berlioz;

	Berlioz.getIdea()->setBrain("I want Eat\n", 0);

	std::cout << std::endl << Berlioz.getIdea()->getBrain(0) << std::endl << std::endl;
	std::cout << std::endl << toulouse.getIdea()->getBrain(0) << std::endl << std::endl;
	std::cout << std::endl << Berlioz.getIdea()->getBrain(0) << std::endl << std::endl;
	return (0);
}
