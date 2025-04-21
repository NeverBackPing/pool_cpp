#include "../includes/WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal constructor called" << std::endl;
	this->type = "animal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & copy)
{
	std::cout << "Wrong Animal copy called" << std::endl;
	this->type = copy.getType();
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & copy)
{
	this->type = copy.getType();
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "An wrong animal makes a noise\n";
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
