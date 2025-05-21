#pragma once

# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, u_int grade);
		~Bureaucrat();

		int	getter_grade() const;
		int	GradeCheck(int grade);

		std::string getter_name() const;

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
		std::string	_name;
		u_int		_grade;
};

void Getinfo(Bureaucrat& employed);
