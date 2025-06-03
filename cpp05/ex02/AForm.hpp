#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	protected:
		//Objet
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;
		const std::string	name;

	public:
		// Form Canonique
		AForm(std::string document, int lvl_sign, int exe_sign);
		AForm &operator=(const AForm &copy);
		virtual ~AForm();

		//Method Getter
		int				getter_grade_sign() const;
		int				getter_grade_exec() const;
		bool			getIsSigned() const;
		std::string		getter_name() const;

		//Method action
		void			beSigned(Bureaucrat& emplyed);
		virtual void	execute(Bureaucrat const & executor) const = 0;

	//Exception
	class GradeTooHighException: public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("grade is too high!");
		}
	} Fh_exeception;

	class GradeTooLowException: public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("grade is too low!");
		}
	} Fl_exeception;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);
