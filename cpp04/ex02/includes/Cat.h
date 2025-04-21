#ifndef CAT_H
# define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat & copy);
		~Cat();

		Cat & operator=(Cat const & copy);

		void makeSound() const;
		std::string getType() const;
		Brain* getIdea();

	private:
		std::string	_type;
		Brain *brain;
};

#endif
