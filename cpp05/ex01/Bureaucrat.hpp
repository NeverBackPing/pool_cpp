#pragma once

# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, unsigned int grade);
		~Bureaucrat();

		Form*			form;
		void			signForm();
		unsigned int	getter_grade() const;
		unsigned int	GradeCheck(unsigned int grade);
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
		unsigned int	_grade;
};

void Getinfo(Bureaucrat& employed);