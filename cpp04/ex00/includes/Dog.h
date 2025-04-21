#ifndef DOG_H
# define DOG_H

#include "Animal.h"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog & copy);
		~Dog();

		Dog & operator=(Dog const & copy);

		void makeSound() const;
		std::string getType() const;

	private:
		std::string	_type;
};

#endif
