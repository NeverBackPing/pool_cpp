#include "../includes/WrongCat.h"

WrongCat::WrongCat()
{
	std::cout << "Wrong cat constructor called" << std::endl;
	this->_type = "wrong cat";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat & copy)
{
	this->_type = copy.getType();
	std::cout << "wrong cat copy called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & copy)
{
	this->_type = copy.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Not a cat sound\n";
}
