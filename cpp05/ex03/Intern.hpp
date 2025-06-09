#pragma once

# include <Aform.hpp>
# include <Bureaucrat.hpp>


class Intern
{
	public:
		Intern();
		~Intern();

		AForm	*makeForm(char *FormName, char *target);
};


