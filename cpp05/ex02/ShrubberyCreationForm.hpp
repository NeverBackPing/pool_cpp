#pragma once

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"


class ShrubberyCreationForm: public AForm
{
	private:
		//Objet
		std::string _target;
	public:
		// Form Canonique
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();

		//Method Getter
		std::string GetTaget();

		//Method action
		void execute(Bureaucrat const & executor) const;

		//exception
		class NoSign: public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("It not sign, you can't execute");
			}
		}NoSign;
};
