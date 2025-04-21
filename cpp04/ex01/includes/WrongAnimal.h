#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal & copy);
		virtual ~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & copy);

		void makeSound() const;
		std::string getType() const;

	protected:
		std::string	type;
};

#endif
