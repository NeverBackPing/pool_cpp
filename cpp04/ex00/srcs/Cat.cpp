#include "../includes/Cat.h"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

Cat::Cat(Cat & copy)
{
	this->_type = copy.getType();
	std::cout << "Cat copy called\n";
}

Cat & Cat::operator=(Cat const & copy)
{
	this->_type = copy.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaaaw ! I want eat !!\n";
}

std::string Cat::getType() const
{
	return (this->_type);
}
