#pragma once

# include <iostream>
# include <string>
# include <sstream>
# include <stdlib.h>

class Bureaucrat
{
	public:
		// Form Canonique
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();

		//Method Getter
		int				getter_grade() const;
		std::string		getter_name() const;
		void 			incrementGrade();
		void 			decrementGrade(); 

		//Exception
		class GradeTooHighException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("The grade so High");
			}
		} Gh_exeception;

		class GradeTooLowException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("The grade so low");
			}
		} Gl_exeception;

	private:
		//Objet
		const std::string		_name;
		int				_grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
