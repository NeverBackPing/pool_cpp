#pragma once

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name,  int grade);
		~Bureaucrat();

		void			signForm(AForm& doc);
		int				getter_grade() const;
		int				GradeCheck( int grade);
		std::string		getter_name() const;
		virtual void	executeForm(AForm const & form) const = 0;

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

void	Getinfo(Bureaucrat& employed);
