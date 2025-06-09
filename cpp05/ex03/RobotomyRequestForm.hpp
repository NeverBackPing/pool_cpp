#pragma once

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		//Objet
		std::string _target;
	public:
		// Form Canonique
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();

	//Method Getter
		std::string GetTaget() const;

	//Method action
		void execute(Bureaucrat const & executor) const;
};
