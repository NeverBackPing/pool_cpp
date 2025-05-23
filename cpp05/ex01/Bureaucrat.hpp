#pragma once

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name,  int grade);
		~Bureaucrat();

		
		void			signForm(Form& doc);
		 int	getter_grade() const;
		 int	GradeCheck( int grade);
		std::string 	getter_name() const;

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
		int	_grade;
};

void Getinfo(Bureaucrat& employed);