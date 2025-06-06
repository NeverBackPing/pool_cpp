#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain & copy);
		~Brain();

		Brain & operator=(Brain const & copy);

		std::string getIdeas(int i);
		void setIdea(std::string idea, int i);

	private:
		std::string ideas[100];
};

#endif
