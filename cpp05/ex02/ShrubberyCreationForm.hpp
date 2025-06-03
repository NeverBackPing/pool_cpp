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
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm & copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy)
		~ShrubberyCreationForm();

		//Method Getter
		std::string GetTaget();

		//Method action
		void execute(void);
};
