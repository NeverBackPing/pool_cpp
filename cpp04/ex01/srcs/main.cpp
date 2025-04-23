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

	std::cout << std::endl << "[ DELETE DOG AND CAT NEW] " << std::endl << std::endl;

	for (int i = 0; i < 6; i++)
		delete animals[i];

	animal_copy.makeSound(); // Not noise

	//std::cout << std::endl;
	/*Dog bill;
	{
		Dog tmp = bill;
	}*/

	/*bill.getIdea()->setIdea("I want eat ice scream", 0);
	std::cout << std::endl << bill.getIdea()->getIdeas(0)<< std::endl;*/

	std::cout << std::endl << "[ BRAIN ] " << std::endl << std::endl;

	Dog doug;

	doug.getIdea()->setIdea("I want eat ice scream", 0);
	doug.getIdea()->setIdea("Lets go walk", 1);
	std::cout << std::endl << doug.getIdea()->getIdeas(0)<< std::endl;
	std::cout << std::endl << doug.getIdea()->getIdeas(1) << std::endl << std::endl;

	Cat Berlioz;

	Berlioz.getIdea()->setIdea("Happy Happy Happy\n", 0);
	Cat toulouse = Berlioz;

	Berlioz.getIdea()->setIdea("I want Eat\n", 0);

	std::cout << std::endl << Berlioz.getIdea()->getIdeas(0) << std::endl << std::endl;
	std::cout << std::endl << toulouse.getIdea()->getIdeas(0) << std::endl << std::endl;
	std::cout << std::endl << Berlioz.getIdea()->getIdeas(0) << std::endl << std::endl;
	return (0);
}
