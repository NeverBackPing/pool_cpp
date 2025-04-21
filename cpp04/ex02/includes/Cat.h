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
		std::string getIdea(int index);
		void setIdea(std::string idea, int i);

	private:
		std::string	_type;
		Brain *brain;
};

#endif
