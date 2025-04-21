#include "../includes/Brain.h"

Brain::Brain()
{
	std::cout << "Brains constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain & copy)
{
	std::cout << "A brain copy ideas called" << std::endl;
	*this = copy;
}

Brain & Brain::operator=(Brain const & copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = copy.ideas[i];
		}
	}
	return (*this);
}

void Brain::setBrain(std::string idea, int i)
{
	if (i < 0 || i > 100)
		return ;
	this->ideas[i] = idea;
}

std::string Brain::getBrain(int i)
{
	if (i < 0 || i > 100)
		return ("Bad index");
	return (this->ideas[i]);
}
