#pragma once

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"


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
		std::string GetTaget() const;

		//Method action
		void execute(Bureaucrat const & executor) const;
};
