#include "../includes/Dog.h"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog & copy)
{
	std::cout << "Dog Copy called" << std::endl;
	*this = copy;
}

Dog & Dog::operator=(Dog const & copy)
{
	if (this != &copy)
	{
		_type = copy.getType();
		brain = new Brain(*copy.brain);
	}
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

void Dog::setIdea(std::string idea, int i)
{
	this->brain->setIdea(idea, i);
}

std::string Dog::getIdea(int i)
{
	if (i < 0 || i > 100)
		return ("Bad index\n");
	return (this->brain->getIdeas()[i]);
}
