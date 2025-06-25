#pragma once

# include <iostream>
# include <string>
# include <sstream>
# include <stdlib.h>
# include "AForm.hpp"

class Form;

class Bureaucrat
{
	public:
		// Form Canonique
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();

		//Method Getter
		void			signForm(AForm& doc);
		int				getter_grade() const;
		std::string		getter_name() const;
		void			setter_grade(int edit);
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
		std::string		_name;
		int				_grade;
};
std::string		check_info(const Bureaucrat& obj);
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
