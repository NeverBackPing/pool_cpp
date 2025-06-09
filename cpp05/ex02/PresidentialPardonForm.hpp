#pragma once

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"


class PresidentialPardonForm: public AForm
{
	private:
		//Objet
		std::string _target;
	public:
		// Form Canonique
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		//Method Getter
		std::string GetTaget() const;

		//Method action
		void execute(Bureaucrat const & executor) const;
};
