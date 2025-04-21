#include "../includes/Animal.h"

Animal::Animal()
: _type("animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type)
: _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal & copy)
{
	std::cout << "Animal copy called" << std::endl;
	this->_type = copy._type;
}

Animal & Animal::operator=(Animal const & copy)
{
	if (this != &copy)
	{
		this->_type = copy.getType();
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "An animal makes a noise" << std::endl;
}

std::string Animal::getType( void ) const
{
	return (this->_type);
}
