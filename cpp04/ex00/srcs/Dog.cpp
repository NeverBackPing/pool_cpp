#include "../includes/Dog.h"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog & copy)
{
	this->_type = copy.getType();
	std::cout << "Dog Copy called" << std::endl;
}

Dog & Dog::operator=(Dog const & copy)
{
	this->_type = copy._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof ! we're going for a walk" << std::endl;
}

std::string Dog::getType() const
{
	return (this->_type);
}
