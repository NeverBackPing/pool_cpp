#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat & copy);
		~WrongCat();

		WrongCat & operator=(WrongCat const & copy);

		void makeSound() const;

	protected:
		std::string	_type;
};

#endif
