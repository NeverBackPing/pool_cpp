#include "../includes/Cat.h"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called\n";
}

Cat::Cat(Cat & copy)
{
	std::cout << "Cat copy called\n";
	*this = copy;
}

Cat & Cat::operator=(Cat const & copy)
{
	if (this != &copy)
	{
		this->_type = copy.getType();
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

/*Cat & Cat::operator=(Cat const & copy)
{
	if (this != &copy)
	{
		this->_type = copy.getType();
		brain = copy.brain;
	}
	return (*this);
}*/

void Cat::makeSound() const
{
	std::cout << "Miaaaw ! I want eat !!\n";
}

std::string Cat::getType() const
{
	return (this->_type);
}

Brain* Cat::getIdea()
{
	return (this->brain);
}

