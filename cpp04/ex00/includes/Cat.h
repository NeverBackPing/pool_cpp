#ifndef CAT_H
# define CAT_H

#include "Animal.h"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat & copy);
		~Cat();

		Cat & operator=(Cat const & copy);

		void makeSound() const;
		std::string getType() const;

	private:
		std::string	_type;
};

#endif
